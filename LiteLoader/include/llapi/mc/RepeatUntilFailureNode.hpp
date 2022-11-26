/**
 * @file  RepeatUntilFailureNode.hpp
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
 * @brief MC class RepeatUntilFailureNode.
 *
 */
class RepeatUntilFailureNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATUNTILFAILURENODE
public:
    class RepeatUntilFailureNode& operator=(class RepeatUntilFailureNode const &) = delete;
    RepeatUntilFailureNode(class RepeatUntilFailureNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   821751923
     */
    virtual ~RepeatUntilFailureNode();
    /**
     * @vftbl  1
     * @symbol ?tick@RepeatUntilFailureNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   1772305094
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@RepeatUntilFailureNode@@MEAAXAEAVActor@@@Z
     * @hash   -1000767325
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0RepeatUntilFailureNode@@QEAA@XZ
     * @hash   1230733733
     */
    MCAPI RepeatUntilFailureNode();

};