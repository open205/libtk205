#include "rs0001_factory.h"
#include "rs0001.h"
#include <memory>
#include <courierr/courierr.h>

/// @note  This class has been generated from a template. Local changes will not be saved!

using namespace tk205;

std::shared_ptr<RSInstanceBase> RS0001Factory::create_instance(const char* RS_instance_file, std::shared_ptr<Courierr::Courierr> logger) const
{
    auto p_rs = std::make_shared<rs0001_ns::RS0001>();
    auto j = tk205::load_json(RS_instance_file);
    std::string schema_version = j["metadata"]["schema_version"];
    if (SchemVer(schema_version.c_str()) > SchemVer(std::string(rs0001_ns::Schema::schema_version).c_str()))
    {
        p_rs = nullptr;
        std::ostringstream oss;
        oss << "Schema version " << schema_version << " is not supported.";
        logger->error(oss.str());
    }
    else if (j["metadata"]["schema"] == "RS0001")
    {
        if (ashrae205_ns::Ashrae205::logger == nullptr) {
            ashrae205_ns::Ashrae205::logger = logger;
        }
        rs0001_ns::RS0001::logger = logger;
        p_rs->initialize(j);
    }
    else
    {
        p_rs = nullptr;
        std::ostringstream oss;
        oss << RS_instance_file << " is not a valid instance of RS0001; returning nullptr.";
        logger->error(oss.str());
    }
    return p_rs;
}
