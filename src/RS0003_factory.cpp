#include "RS0003_factory.h"
#include "RS0003.h"
#include <memory>

/// @note  This class has been generated from a template. Local changes will not be saved!

using namespace tk205;

std::unique_ptr<rs_instance_base> RS0003_factory::Create_instance(const char* RS_instance_file) const
{
    auto p_rs = std::make_unique<RS0003_NS::RS0003>();
    auto j = tk205::Load_json(RS_instance_file);
    if (j["metadata"]["schema"] == "RS0003")
    {
        p_rs->Initialize(j);
    }
    return p_rs;
}
