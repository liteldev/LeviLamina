/**
 * @file  BlockCreativeGroupDescription.hpp
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
 * @brief MC structure BlockCreativeGroupDescription.
 *
 */
struct BlockCreativeGroupDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCREATIVEGROUPDESCRIPTION
public:
    struct BlockCreativeGroupDescription& operator=(struct BlockCreativeGroupDescription const &) = delete;
    BlockCreativeGroupDescription(struct BlockCreativeGroupDescription const &) = delete;
    BlockCreativeGroupDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1064017977
     */
    virtual ~BlockCreativeGroupDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockCreativeGroupDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1479377664
     */
    virtual std::string const & getName() const;
    /**
     * @symbol ?NameID@BlockCreativeGroupDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1643750611
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?registerVersionUpgrades@BlockCreativeGroupDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   -1195904230
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};