#include "api/McAPI.h"

ClassDefine<void> McClassBuilder =
    defineClass("mc")
        .function("getBDSVersion", &McClass::getBDSVersion)
        .function("getServerProtocolVersion", &McClass::getServerProtocolVersion)
        .function("runcmd", &McClass::runcmd)
        .function("runcmdEx", &McClass::runcmdEx)
        .function("regPlayerCmd", &McClass::regPlayerCmd)
        .function("newCommand", &McClass::newCommand)
        .function("broadcast", &McClass::broadcast)
        .function("listen", &McClass::listen)
        .function("getPlayer", &McClass::getPlayer)
        .function("getOnlinePlayers", &McClass::getOnlinePlayers)
        .function("getAllEntities", McClass::getAllEntities)
        .function("getEntities", McClass::getEntities)
        .function("newItem", &McClass::newItem)
        .function("spawnMob", &McClass::spawnMob)
        .function("cloneMob", &McClass::cloneMob)
        .function("spawnItem", &McClass::spawnItem)
        .function("spawnSimulatedPlayer", &McClass::spawnSimulatedPlayer)
        .function("explode", &McClass::explode)
        .function("getBlock", &McClass::getBlock)
        .function("setBlock", &McClass::setBlock)
        .function("spawnParticle", &McClass::spawnParticle)
        .function("newSimpleForm", &McClass::newSimpleForm)
        .function("newCustomForm", &McClass::newCustomForm)
        .function("regConsoleCmd", &McClass::regConsoleCmd)
        .function("setMotd", &McClass::setMotd)
        .function("sendCmdOutput", &McClass::sendCmdOutput)
        .function("newIntPos", &McClass::newIntPos)
        .function("newFloatPos", &McClass::newFloatPos)
        .function("getDisplayObjective", &McClass::getDisplayObjective)
        .function("clearDisplayObjective", &McClass::clearDisplayObjective)
        .function("getScoreObjective", &McClass::getScoreObjective)
        .function("newScoreObjective", &McClass::newScoreObjective)
        .function("removeScoreObjective", &McClass::removeScoreObjective)
        .function("getAllScoreObjectives", &McClass::getAllScoreObjectives)
        .function("setStructure", &McClass::setStructure)
        .function("getStructure", &McClass::getStructure)
        .function("newParticleSpawner", &McClass::newParticleSpawner)
        .function("getPlayerNbt", &McClass::getPlayerNbt)
        .function("setPlayerNbt", &McClass::setPlayerNbt)
        .function("setPlayerNbtTags", &McClass::setPlayerNbtTags)
        .function("deletePlayerNbt", &McClass::deletePlayerNbt)
        .function("getPlayerScore", &McClass::getPlayerScore)
        .function("setPlayerScore", &McClass::setPlayerScore)
        .function("addPlayerScore", &McClass::addPlayerScore)
        .function("reducePlayerScore", &McClass::reducePlayerScore)
        .function("deletePlayerScore", &McClass::deletePlayerScore)
        .function("getTime", &McClass::getTime)
        .function("setTime", &McClass::setTime)
        .function("getWeather", &McClass::getWeather)
        .function("setWeather", &McClass::setWeather)
        // For Compatity
        .function("getAllScoreObjective", &McClass::getAllScoreObjectives)
        .function("getDisplayObjectives", &McClass::getDisplayObjective)
        .function("crash", &McClass::crashBDS)
        .function("setMaxPlayers", &McClass::setMaxNumPlayers)
        .build();
