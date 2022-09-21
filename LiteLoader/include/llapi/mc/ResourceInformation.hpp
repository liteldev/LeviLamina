/**
 * @file  MC/ResourceInformation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourceInformation.
 *
 */
class ResourceInformation {

#define AFTER_EXTRA
// Add Member There
public:
enum class ResourceType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEINFORMATION
public:
    class ResourceInformation& operator=(class ResourceInformation const &) = delete;
    ResourceInformation() = delete;
#endif

public:
    /**
     * @hash   -2029362718
     * @symbol ??0ResourceInformation@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@AEBVUUID@mce@@W4ResourceType@0@00@Z
     */
    MCAPI ResourceInformation(std::string const &, class SemVersion const &, class mce::UUID const &, enum ResourceInformation::ResourceType, std::string const &, std::string const &);
    /**
     * @hash   851713029
     * @symbol ??0ResourceInformation@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@AEBVUUID@mce@@000@Z
     */
    MCAPI ResourceInformation(std::string const &, class SemVersion const &, class mce::UUID const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   282307025
     * @symbol ??0ResourceInformation@@QEAA@AEBV0@@Z
     */
    MCAPI ResourceInformation(class ResourceInformation const &);
    /**
     * @hash   -1728002405
     * @symbol ?satisfies@ResourceInformation@@QEBA_NAEBUPackIdVersion@@@Z
     */
    MCAPI bool satisfies(struct PackIdVersion const &) const;
    /**
     * @hash   1940462362
     * @symbol ??1ResourceInformation@@QEAA@XZ
     */
    MCAPI ~ResourceInformation();
    /**
     * @hash   701079220
     * @symbol ?ResourceTypeFromString@ResourceInformation@@SA?AW4ResourceType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static enum ResourceInformation::ResourceType ResourceTypeFromString(std::string const &);
    /**
     * @hash   1502756144
     * @symbol ?StringFromResourceType@ResourceInformation@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ResourceType@1@@Z
     */
    MCAPI static std::string const & StringFromResourceType(enum ResourceInformation::ResourceType);

};