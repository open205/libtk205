#include "rs0007_factory.h"
#include "rs0007.h"
#include <memory>
#include <error_handling_tk205.h>

/// @note  This class has been generated from a template. Local changes will not be saved!

using namespace tk205;

std::shared_ptr<RSInstanceBase> RS0007Factory::create_instance(const char* RS_instance_file) const
{
    auto p_rs = std::make_shared<rs0007_ns::RS0007>();
    auto j = tk205::load_json(RS_instance_file);
    std::string schema_version = j["metadata"]["schema_version"];
    if (SchemVer(schema_version.c_str()) > SchemVer(std::string(rs0007_ns::Schema::schema_version).c_str()))
    {
        p_rs = nullptr;
        std::ostringstream oss;
        oss << "Schema version " << schema_version << " is not supported.";
        tk205::show_message(tk205::MsgSeverity::ERR_205, oss.str());
    }
    else if (j["metadata"]["schema"] == "RS0007")
    {
        p_rs->initialize(j);
    }
    else
    {
        p_rs = nullptr;
        std::ostringstream oss;
        oss << RS_instance_file << " is not a valid instance of RS0007; returning nullptr.";
        tk205::show_message(tk205::MsgSeverity::ERR_205, oss.str());
    }
    return p_rs;
}
