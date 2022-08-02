#include "rs0005_factory.h"
#include "rs0005.h"
#include <memory>

/// @note  This class has been generated from a template. Local changes will not be saved!

using namespace tk205;

std::unique_ptr<RSInstanceBase> RS0005Factory::create_instance(const char* RS_instance_file) const
{
    auto p_rs = std::make_unique<rs0005_ns::RS0005>();
    auto j = tk205::load_json(RS_instance_file);
    if (j["metadata"]["schema"] == "RS0005")
    {
        p_rs->initialize(j);
    }
    return p_rs;
}
