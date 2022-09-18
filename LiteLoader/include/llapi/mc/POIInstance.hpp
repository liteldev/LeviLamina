/**
 * @file  POIInstance.hpp
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
 * @brief MC class POIInstance.
 *
 */
class POIInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POIINSTANCE
public:
    class POIInstance& operator=(class POIInstance const &) = delete;
    POIInstance(class POIInstance const &) = delete;
    POIInstance() = delete;
#endif

public:
    /**
     * @symbol ??0POIInstance@@QEAA@AEBVBlockPos@@_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4POIType@@M_K4222@Z
     * @hash   408979802
     */
    MCAPI POIInstance(class BlockPos const &, bool, std::string, enum class POIType, float, unsigned __int64, unsigned __int64, std::string, std::string, std::string);
    /**
     * @symbol ?decreaseOwnerCount@POIInstance@@QEAAX_K@Z
     * @hash   -299456171
     */
    MCAPI void decreaseOwnerCount(unsigned __int64);
    /**
     * @symbol ?getEndEvent@POIInstance@@QEBAAEBVHashedString@@XZ
     * @hash   493570896
     */
    MCAPI class HashedString const & getEndEvent() const;
    /**
     * @symbol ?getInitEvent@POIInstance@@QEBAAEBVHashedString@@XZ
     * @hash   -365612190
     */
    MCAPI class HashedString const & getInitEvent() const;
    /**
     * @symbol ?getName@POIInstance@@QEBAAEBVHashedString@@XZ
     * @hash   -812016496
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @symbol ?getOwnerCapacity@POIInstance@@QEBA_KXZ
     * @hash   -1920305779
     */
    MCAPI unsigned __int64 getOwnerCapacity() const;
    /**
     * @symbol ?getOwnerCount@POIInstance@@QEBA_KXZ
     * @hash   -185106213
     */
    MCAPI unsigned __int64 getOwnerCount() const;
    /**
     * @symbol ?getPosition@POIInstance@@QEBAAEBVBlockPos@@XZ
     * @hash   -1113601554
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @symbol ?getRadius@POIInstance@@QEBAMXZ
     * @hash   -1597059242
     */
    MCAPI float getRadius() const;
    /**
     * @symbol ?getSecondBlockFullAABB@POIInstance@@QEAA?AVAABB@@AEAVBlockSource@@@Z
     * @hash   -83806875
     */
    MCAPI class AABB getSecondBlockFullAABB(class BlockSource &);
    /**
     * @symbol ?getSoundEvent@POIInstance@@QEBAAEBVHashedString@@XZ
     * @hash   827559632
     */
    MCAPI class HashedString const & getSoundEvent() const;
    /**
     * @symbol ?getType@POIInstance@@QEBA?AW4POIType@@XZ
     * @hash   -188523374
     */
    MCAPI enum class POIType getType() const;
    /**
     * @symbol ?getTypeName@POIInstance@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   398382798
     */
    MCAPI std::string getTypeName() const;
    /**
     * @symbol ?getWeight@POIInstance@@QEBA_KXZ
     * @hash   434436747
     */
    MCAPI unsigned __int64 getWeight() const;
    /**
     * @symbol ?increaseOwnerCount@POIInstance@@QEAAX_K@Z
     * @hash   846761653
     */
    MCAPI void increaseOwnerCount(unsigned __int64);
    /**
     * @symbol ?incrementArrivalFailureCount@POIInstance@@QEAAXXZ
     * @hash   -382954383
     */
    MCAPI void incrementArrivalFailureCount();
    /**
     * @symbol ?isFull@POIInstance@@QEBA_NXZ
     * @hash   993215634
     */
    MCAPI bool isFull() const;
    /**
     * @symbol ?isPathable@POIInstance@@QEBA_NXZ
     * @hash   -450089422
     */
    MCAPI bool isPathable() const;
    /**
     * @symbol ?resetArrivalFailureCount@POIInstance@@QEAAXXZ
     * @hash   827390065
     */
    MCAPI void resetArrivalFailureCount();
    /**
     * @symbol ?setVillage@POIInstance@@QEAAXPEAVVillage@@@Z
     * @hash   -129471993
     */
    MCAPI void setVillage(class Village *);
    /**
     * @symbol ?trySpawnParticles@POIInstance@@QEBAXAEAVBlockSource@@AEAVRandom@@H@Z
     * @hash   -619423614
     */
    MCAPI void trySpawnParticles(class BlockSource &, class Random &, int) const;
    /**
     * @symbol ?useBoundingBox@POIInstance@@QEBA_NXZ
     * @hash   -384755134
     */
    MCAPI bool useBoundingBox() const;

};