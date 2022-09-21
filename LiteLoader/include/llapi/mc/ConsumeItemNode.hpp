/**
 * @file  MC/ConsumeItemNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConsumeItemNode.
 *
 */
class ConsumeItemNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSUMEITEMNODE
public:
    class ConsumeItemNode& operator=(class ConsumeItemNode const &) = delete;
    ConsumeItemNode(class ConsumeItemNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ConsumeItemNode();
    /**
     * @hash   1165200510
     * @vftbl  1
     * @symbol ?tick@ConsumeItemNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @hash   1491536045
     * @symbol ??0ConsumeItemNode@@QEAA@XZ
     */
    MCAPI ConsumeItemNode();

};