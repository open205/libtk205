#include "rs0002_factory.h"
#include "rs0002.h"
#include <memory>

/// @note  This class has been generated from a template. Local changes will not be saved!

using namespace tk205;

std::shared_ptr<RSInstanceBase> RS0002Factory::create_instance(const char* RS_instance_file) const
{
    auto p_rs = std::make_shared<rs0002_ns::RS0002>();
    auto j = tk205::load_json(RS_instance_file);
    if (j["metadata"]["schema"] == "RS0002")
    {
        p_rs->initialize(j);
    }
    return p_rs;
}
