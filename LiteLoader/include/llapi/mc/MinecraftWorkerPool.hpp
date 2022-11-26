/**
 * @file  MinecraftWorkerPool.hpp
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
 * @brief MC class MinecraftWorkerPool.
 *
 */
class MinecraftWorkerPool {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTWORKERPOOL
public:
    class MinecraftWorkerPool& operator=(class MinecraftWorkerPool const &) = delete;
    MinecraftWorkerPool(class MinecraftWorkerPool const &) = delete;
    MinecraftWorkerPool() = delete;
#endif

public:
    /**
     * @symbol ?ASYNC@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   -362357394
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> ASYNC;
    /**
     * @symbol ?CONNECTEDSTORAGE@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   220380976
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> CONNECTEDSTORAGE;
    /**
     * @symbol ?DISK@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   -1520865536
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> DISK;
    /**
     * @symbol ?GAMEFACE_LAYOUT@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   -1438199906
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> GAMEFACE_LAYOUT;
    /**
     * @symbol ?INPUT@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   1427153998
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> INPUT;
    /**
     * @symbol ?LEVELDB@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   1123934510
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB;
    /**
     * @symbol ?LEVELDB_COMPACTION@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   1409902816
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB_COMPACTION;
    /**
     * @symbol ?NETWORK@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   -813927538
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> NETWORK;
    /**
     * @symbol ?PYTHONRUNTIME@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   1689496318
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> PYTHONRUNTIME;
    /**
     * @symbol ?RENDERING@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   -2030135266
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> RENDERING;
    /**
     * @symbol ?VR@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   2006589392
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> VR;
    /**
     * @symbol ?WATCHDOG@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     * @hash   -1279479584
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> WATCHDOG;
    /**
     * @symbol ?configureMainThread@MinecraftWorkerPool@@SAXXZ
     * @hash   -1507462091
     */
    MCAPI static void configureMainThread();
    /**
     * @symbol ?configureServerThread@MinecraftWorkerPool@@SAXXZ
     * @hash   -455874231
     */
    MCAPI static void configureServerThread();
    /**
     * @symbol ?createSingletons@MinecraftWorkerPool@@SAXXZ
     * @hash   -2092034295
     */
    MCAPI static void createSingletons();
    /**
     * @symbol ?destroySingletons@MinecraftWorkerPool@@SAXXZ
     * @hash   -1206069385
     */
    MCAPI static void destroySingletons();
    /**
     * @symbol ?initializeDefaults@MinecraftWorkerPool@@SAXXZ
     * @hash   2017702981
     */
    MCAPI static void initializeDefaults();
    /**
     * @symbol ?loadWorkerConfigurations@MinecraftWorkerPool@@SAXII@Z
     * @hash   1327710587
     */
    MCAPI static void loadWorkerConfigurations(unsigned int, unsigned int);

};