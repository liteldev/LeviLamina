/**
 * @file  AppPlatformWindows.hpp
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
 * @brief MC class AppPlatformWindows.
 *
 */
class AppPlatformWindows {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORMWINDOWS
public:
    class AppPlatformWindows& operator=(class AppPlatformWindows const &) = delete;
    AppPlatformWindows(class AppPlatformWindows const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORMWINDOWS
    /**
     * @symbol ?_getCurrentStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -1559039521
     */
    MCVAPI class Core::PathBuffer<std::string> _getCurrentStoragePath() const;
    /**
     * @symbol ?_getExternalStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   423040383
     */
    MCVAPI class Core::PathBuffer<std::string> _getExternalStoragePath() const;
    /**
     * @symbol ?_getInternalStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -1150640579
     */
    MCVAPI class Core::PathBuffer<std::string> _getInternalStoragePath() const;
    /**
     * @symbol ?_getUserdataPath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -1720816110
     */
    MCVAPI class Core::PathBuffer<std::string> _getUserdataPath() const;
    /**
     * @symbol ?allowContentLogWriteToDisk@AppPlatformWindows@@UEAA_NXZ
     * @hash   -1195549027
     */
    MCVAPI bool allowContentLogWriteToDisk();
    /**
     * @symbol ?calculateAvailableDiskFreeSpace@AppPlatformWindows@@UEAA_KAEBVPath@Core@@@Z
     * @hash   -1086422359
     */
    MCVAPI unsigned __int64 calculateAvailableDiskFreeSpace(class Core::Path const &);
    /**
     * @symbol ?canAppSelfTerminate@AppPlatformWindows@@UEBA_NXZ
     * @hash   1469283101
     */
    MCVAPI bool canAppSelfTerminate() const;
    /**
     * @symbol ?copyImportFileToTempFolder@AppPlatformWindows@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     * @hash   -1762403118
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @symbol ?getHighPerformanceThreadsCount@AppPlatformWindows@@UEBA_KXZ
     * @hash   -97697281
     */
    MCVAPI unsigned __int64 getHighPerformanceThreadsCount() const;
    /**
     * @symbol ?getMainThreadQueue@AppPlatformWindows@@UEAAAEAV?$MPMCQueue@V?$function@$$A6AXXZ@std@@@@XZ
     * @hash   470603342
     */
    MCVAPI class MPMCQueue<class std::function<void (void)>> & getMainThreadQueue();
    /**
     * @symbol ?getPackagedShaderCachePath@AppPlatformWindows@@MEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   207171591
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();
    /**
     * @symbol ?getPlatformTTSEnabled@AppPlatformWindows@@UEBA_NXZ
     * @hash   -1254608240
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @symbol ?getPlatformTTSExists@AppPlatformWindows@@UEBA_NXZ
     * @hash   740441759
     */
    MCVAPI bool getPlatformTTSExists() const;
    /**
     * @symbol ?getPlatformTempPath@AppPlatformWindows@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -995486303
     */
    MCVAPI class Core::PathBuffer<std::string> getPlatformTempPath() const;
    /**
     * @symbol ?getTotalHardwareThreadsCount@AppPlatformWindows@@UEBA_KXZ
     * @hash   14917085
     */
    MCVAPI unsigned __int64 getTotalHardwareThreadsCount() const;
    /**
     * @symbol ?queueForMainThread_DEPRECATED@AppPlatformWindows@@UEAAXV?$function@$$A6AXXZ@std@@@Z
     * @hash   1607613158
     */
    MCVAPI void queueForMainThread_DEPRECATED(class std::function<void (void)>);
    /**
     * @symbol ?registerExperimentsActiveCrashDump@AppPlatformWindows@@UEBAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -31175572
     */
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const &) const;
    /**
     * @symbol ??1AppPlatformWindows@@UEAA@XZ
     * @hash   61494420
     */
    MCVAPI ~AppPlatformWindows();
#endif
    /**
     * @symbol ??0AppPlatformWindows@@QEAA@XZ
     * @hash   1461486971
     */
    MCAPI AppPlatformWindows();
    /**
     * @symbol ?EXPERIMENTS_ACTIVE_KEY@AppPlatformWindows@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1726298189
     */
    MCAPI static std::string const EXPERIMENTS_ACTIVE_KEY;

//protected:
    /**
     * @symbol ?_findHighPerformanceThreadsCount@AppPlatformWindows@@IEBA_KXZ
     * @hash   -1808384287
     */
    MCAPI unsigned __int64 _findHighPerformanceThreadsCount() const;

protected:

};