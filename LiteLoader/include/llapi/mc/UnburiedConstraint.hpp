/**
 * @file  UnburiedConstraint.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UnburiedConstraint.
 *
 */
class UnburiedConstraint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNBURIEDCONSTRAINT
public:
    class UnburiedConstraint& operator=(class UnburiedConstraint const &) = delete;
    UnburiedConstraint(class UnburiedConstraint const &) = delete;
    UnburiedConstraint() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -702641271
     */
    virtual ~UnburiedConstraint();
    /**
     * @vftbl  1
     * @symbol ?isSatisfied@UnburiedConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
     * @hash   811849608
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const &, class BlockPos const &, enum class Rotation const &) const;
    /**
     * @symbol ??0UnburiedConstraint@@QEAA@AEAVStructureTemplate@@@Z
     * @hash   1751711028
     */
    MCAPI UnburiedConstraint(class StructureTemplate &);

};