/**
 * @file  RegistryKey.hpp
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
 * @brief MC class RegistryKey.
 *
 */
class RegistryKey {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REGISTRYKEY
public:
    class RegistryKey& operator=(class RegistryKey const &) = delete;
    RegistryKey(class RegistryKey const &) = delete;
    RegistryKey() = delete;
#endif

public:
    /**
     * @symbol ??BRegistryKey@@QEBA_NXZ
     * @hash   2054577728
     */
    MCAPI operator bool() const;
    /**
     * @symbol ?readValue@RegistryKey@@QEBA_NPEBDAEAK@Z
     * @hash   -856386989
     */
    MCAPI bool readValue(char const *, unsigned long &) const;
    /**
     * @symbol ?readValue@RegistryKey@@QEBA_NPEBDAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1836750525
     */
    MCAPI bool readValue(char const *, std::string &) const;
    /**
     * @symbol ??1RegistryKey@@QEAA@XZ
     * @hash   -946260514
     */
    MCAPI ~RegistryKey();
    /**
     * @symbol ?open@RegistryKey@@SA?AV1@PEAUHKEY__@@PEBDK@Z
     * @hash   -315551851
     */
    MCAPI static class RegistryKey open(struct HKEY__*, char const *, unsigned long);

};