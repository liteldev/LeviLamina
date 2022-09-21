/**
 * @file  MC/ShiftedDurationAmplifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShiftedDurationAmplifier.
 *
 */
class ShiftedDurationAmplifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIFTEDDURATIONAMPLIFIER
public:
    class ShiftedDurationAmplifier& operator=(class ShiftedDurationAmplifier const &) = delete;
    ShiftedDurationAmplifier(class ShiftedDurationAmplifier const &) = delete;
    ShiftedDurationAmplifier() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ShiftedDurationAmplifier();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   5563266
     * @vftbl  2
     * @symbol ?shouldBuff@ShiftedDurationAmplifier@@UEBA_NHH@Z
     */
    virtual bool shouldBuff(int, int) const;
    /**
     * @hash   -1794230618
     * @vftbl  3
     * @symbol ?getTickInterval@ShiftedDurationAmplifier@@UEBAHH@Z
     */
    virtual int getTickInterval(int) const;
    /**
     * @hash   915450355
     * @symbol ??0ShiftedDurationAmplifier@@QEAA@H@Z
     */
    MCAPI ShiftedDurationAmplifier(int);

};