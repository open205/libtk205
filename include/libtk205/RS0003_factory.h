#ifndef RS0003_FACTORY_H_
#define RS0003_FACTORY_H_

#include "rs_instance_factory.h"

/// @note  This class has been generated from a template. Local changes will not be saved!

namespace tk205 {

   class RS0003_factory : public rs_instance_factory
   {
      public:
         std::unique_ptr<rs_instance_base> Create_instance(const char* RS_instance_file) const override;
   };
}

#endif
