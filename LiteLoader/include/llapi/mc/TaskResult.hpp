/**
 * @file  TaskResult.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskResult.
 *
 */
class TaskResult {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKRESULT
public:
    class TaskResult& operator=(class TaskResult const &) = delete;
    TaskResult(class TaskResult const &) = delete;
#endif

public:
    /**
     * @symbol ??0TaskResult@@QEAA@XZ
     * @hash   722701598
     */
    MCAPI TaskResult();
    /**
     * @symbol ?getRunAtTime@TaskResult@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ
     * @hash   177165087
     */
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> getRunAtTime() const;
    /**
     * @symbol ?getWaitingOperation@TaskResult@@QEBA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@XZ
     * @hash   1199419456
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> getWaitingOperation() const;
    /**
     * @symbol ?hasDelay@TaskResult@@QEBA_NXZ
     * @hash   1736629772
     */
    MCAPI bool hasDelay() const;
    /**
     * @symbol ?isDone@TaskResult@@QEBA_NXZ
     * @hash   1227103714
     */
    MCAPI bool isDone() const;
    /**
     * @symbol ?isWaiting@TaskResult@@QEBA_NXZ
     * @hash   -1789167262
     */
    MCAPI bool isWaiting() const;
    /**
     * @symbol ?isWaitingOperationLinked@TaskResult@@QEBA_NXZ
     * @hash   -1272512764
     */
    MCAPI bool isWaitingOperationLinked() const;
    /**
     * @symbol ??1TaskResult@@QEAA@XZ
     * @hash   -1096580100
     */
    MCAPI ~TaskResult();
    /**
     * @symbol ?Done@TaskResult@@2V1@B
     * @hash   1321935616
     */
    MCAPI static class TaskResult const Done;
    /**
     * @symbol ?Requeue@TaskResult@@2V1@B
     * @hash   1128339318
     */
    MCAPI static class TaskResult const Requeue;
    /**
     * @symbol ?requeueAfter@TaskResult@@SA?AV1@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
     * @hash   -44745383
     */
    MCAPI static class TaskResult requeueAfter(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);

};