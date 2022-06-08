// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JigsawEditorData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWEDITORDATA
public:
    class JigsawEditorData& operator=(class JigsawEditorData const &) = delete;
    JigsawEditorData(class JigsawEditorData const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JIGSAWEDITORDATA
public:
#endif
    MCAPI JigsawEditorData(class JigsawEditorData &&);
    MCAPI JigsawEditorData(std::string const &, std::string const &, std::string const &, std::string const &, enum JigsawJointType);
    MCAPI JigsawEditorData();
    MCAPI std::string const & getFinalBlock() const;
    MCAPI enum JigsawJointType const & getJointType() const;
    MCAPI std::string const & getName() const;
    MCAPI std::string const & getTarget() const;
    MCAPI std::string const & getTargetPool() const;
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    MCAPI void save(class CompoundTag &) const;
    MCAPI void setFinalBlock(std::string const &);
    MCAPI void setJointType(enum JigsawJointType const &);
    MCAPI void setName(std::string const &);
    MCAPI void setTarget(std::string const &);
    MCAPI void setTargetPool(std::string const &);
    MCAPI ~JigsawEditorData();
    MCAPI static class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const JOINT_TYPE_TO_NAME;


};