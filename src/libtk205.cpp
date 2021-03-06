#include "libtk205.h"
#include <fstream>

#include <type_traits>

#include <valijson/adapters/nlohmann_json_adapter.hpp>
#include <valijson/utils/nlohmann_json_utils.hpp>
#include <valijson/schema.hpp>
#include <valijson/schema_parser.hpp>
#include <valijson/validator.hpp>

namespace
{
   using json = nlohmann::json;

   void Read_binary_file(const char* filename, std::vector<char> &bytes)
   {
      std::ifstream is (filename, std::ifstream::binary);
      if (is) 
      {
            // get length of file:
            is.seekg(0, is.end);
            size_t length = static_cast<size_t>(is.tellg());
            is.seekg(0, is.beg);

            bytes.resize(length);
            // read data as a block:
            is.read(bytes.data(), length);

            is.close();
      }
   }

   json Load_json(const char* input_file)
   {
      std::string filename(input_file);
      std::string::size_type idx = filename.rfind('.');
      json j;

      if(idx != std::string::npos)
      {
            std::string extension = filename.substr(idx+1);

            if (extension == "cbor")
            {
               std::vector<char> bytearray;
               Read_binary_file(input_file, bytearray);
               j = json::from_cbor(bytearray);
            }
            else if (extension == "json")
            {
               std::string schema(input_file);
               std::ifstream in(schema);
               in >> j;
            }
      }
      return j;
   }
}

namespace tk205 {

    using valijson::Schema;
    using valijson::SchemaParser;
    using valijson::Validator;
    using valijson::adapters::NlohmannJsonAdapter;

    bool Validate_A205(const char* schema_file, const char* input_file)
    {
        json schema_doc;
        if (!valijson::utils::loadDocument(schema_file, schema_doc))
        {
            throw std::runtime_error("Failed to load schema document");
        }

        Schema schema;
        SchemaParser parser;
        NlohmannJsonAdapter schema_adapter(schema_doc);
        parser.populateSchema(schema_adapter, schema);

        json input_doc;
        if (!valijson::utils::loadDocument(input_file, input_doc))
        {
            throw std::runtime_error("Failed to load input document");
        }

        Validator validator;
        NlohmannJsonAdapter input_adapter(input_doc);
        if (!validator.validate(schema, input_adapter, NULL))
        {
            throw std::runtime_error("Validation failed.");
        }
        return true;
    }

    
    RS0007_NS::RS0007 Load_RS0007(const char* input_file)
    {
        auto j = Load_json(input_file);
        return j.get<RS0007_NS::RS0007>();
    }
    
    RS0002_NS::RS0002 Load_RS0002(const char* input_file)
    {
        auto j = Load_json(input_file);
        return j.get<RS0002_NS::RS0002>();
    }
    
    RS0001_NS::RS0001 Load_RS0001(const char* input_file)
    {
        auto j = Load_json(input_file);
        return j.get<RS0001_NS::RS0001>();
    }
    
    RS0004_NS::RS0004 Load_RS0004(const char* input_file)
    {
        auto j = Load_json(input_file);
        return j.get<RS0004_NS::RS0004>();
    }
    
    RS0003_NS::RS0003 Load_RS0003(const char* input_file)
    {
        auto j = Load_json(input_file);
        return j.get<RS0003_NS::RS0003>();
    }
    
    RS0006_NS::RS0006 Load_RS0006(const char* input_file)
    {
        auto j = Load_json(input_file);
        return j.get<RS0006_NS::RS0006>();
    }
    
    RS0005_NS::RS0005 Load_RS0005(const char* input_file)
    {
        auto j = Load_json(input_file);
        return j.get<RS0005_NS::RS0005>();
    }
    
}
