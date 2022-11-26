/**
 * @file  Localization.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Localization.
 *
 */
class Localization {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCALIZATION
public:
    class Localization& operator=(class Localization const &) = delete;
    Localization(class Localization const &) = delete;
    Localization() = delete;
#endif

public:
    /**
     * @symbol ??0Localization@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV0@@Z
     * @hash   1743458653
     */
    MCAPI Localization(std::string const &, class Localization *);
    /**
     * @symbol ??0Localization@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -772740996
     */
    MCAPI Localization(std::string const &);
    /**
     * @symbol ?appendTranslations@Localization@@QEAAXAEBV1@@Z
     * @hash   -1122052660
     */
    MCAPI void appendTranslations(class Localization const &);
    /**
     * @symbol ?appendTranslations@Localization@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@10@Z
     * @hash   -1597759652
     */
    MCAPI void appendTranslations(std::string const &, std::vector<std::string> const &, std::vector<std::string> const &, std::string const &);
    /**
     * @symbol ?get@Localization@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     * @hash   174160702
     */
    MCAPI bool get(std::string const &, std::string &, std::vector<std::string> const &) const;
    /**
     * @symbol ?getFullLanguageCode@Localization@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1264113488
     */
    MCAPI std::string getFullLanguageCode() const;
    /**
     * @symbol ?getStringIdExists@Localization@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1919815147
     */
    MCAPI bool getStringIdExists(std::string const &) const;
    /**
     * @symbol ?loadFromPack@Localization@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPackAccessStrategy@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     * @hash   1773862819
     */
    MCAPI void loadFromPack(std::string const &, class PackAccessStrategy const &, std::vector<std::string> const &);
    /**
     * @symbol ?loadFromResourcePackManager@Localization@@QEAAXAEAVResourcePackManager@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   202728776
     */
    MCAPI void loadFromResourcePackManager(class ResourcePackManager &, std::vector<std::string> const &);
    /**
     * @symbol ??1Localization@@QEAA@XZ
     * @hash   -464931085
     */
    MCAPI ~Localization();
    /**
     * @symbol ?getLanguageCode@Localization@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   509612753
     */
    MCAPI static std::string getLanguageCode(std::string const &);

//protected:
    /**
     * @symbol ?_get@Localization@@IEBA?AUOptionalString@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     * @hash   -1565453792
     */
    MCAPI struct OptionalString _get(std::string const &, std::vector<std::string> const &) const;
    /**
     * @symbol ?_getLangFilePath@Localization@@IEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1577575748
     */
    MCAPI class Core::PathBuffer<std::string> _getLangFilePath(std::string const &);
    /**
     * @symbol ?_getSimple@Localization@@IEBA?AUOptionalString@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   841760675
     */
    MCAPI struct OptionalString _getSimple(std::string const &) const;
    /**
     * @symbol ?_parseFormattedString@Localization@@IEBA?AUOptionalString@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1768187747
     */
    MCAPI struct OptionalString _parseFormattedString(std::string const &) const;
    /**
     * @symbol ?_replaceTokens@Localization@@IEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     * @hash   -704999104
     */
    MCAPI void _replaceTokens(std::string &, std::vector<std::string> const &) const;
    /**
     * @symbol ?_isCommaSeperatedLanguage@Localization@@KA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   844960127
     */
    MCAPI static bool _isCommaSeperatedLanguage(std::string const &);

protected:

};