// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DamageSensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORDEFINITION
public:
    class DamageSensorDefinition& operator=(class DamageSensorDefinition const &) = delete;
    DamageSensorDefinition(class DamageSensorDefinition const &) = delete;
    DamageSensorDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DAMAGESENSORDEFINITION
#endif
    MCAPI void addDamageSensorTrigger(struct DamageSensorTrigger const &);
    MCAPI void initialize(class EntityContext &, class DamageSensorComponent &) const;
    MCAPI void uninitialize(class EntityContext &, class DamageSensorComponent &) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageSensorDefinition>> &);

protected:

private:

};