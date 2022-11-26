/**
 * @file  ActivateToolNode.hpp
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
 * @brief MC class ActivateToolNode.
 *
 */
class ActivateToolNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVATETOOLNODE
public:
    class ActivateToolNode& operator=(class ActivateToolNode const &) = delete;
    ActivateToolNode(class ActivateToolNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1698666857
     */
    virtual ~ActivateToolNode();
    /**
     * @vftbl  1
     * @symbol ?tick@ActivateToolNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   -1700051318
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@ActivateToolNode@@EEAAXAEAVActor@@@Z
     * @hash   -1639857282
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0ActivateToolNode@@QEAA@XZ
     * @hash   -1666297367
     */
    MCAPI ActivateToolNode();

};