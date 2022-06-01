#include "RS0007_factory.h"
#include "RS0007.h"
#include <memory>

/// @note  This class has been generated from a template. Local changes will not be saved!

using namespace tk205;

std::unique_ptr<rs_instance_base> RS0007_factory::Create_instance(const char* RS_instance_file) const
{
    auto p_rs = std::make_unique<RS0007_NS::RS0007>();
    auto j = tk205::Load_json(RS_instance_file);
    if (j["metadata"]["schema"] == "RS0007")
    {
        p_rs->Initialize(j);
    }
    return p_rs;
}
