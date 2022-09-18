/**
 * @file  NewUniqueIdsDataLoadHelper.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "InternalComponentRegistry.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NewUniqueIdsDataLoadHelper.
 *
 */
class NewUniqueIdsDataLoadHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEWUNIQUEIDSDATALOADHELPER
public:
    class NewUniqueIdsDataLoadHelper& operator=(class NewUniqueIdsDataLoadHelper const &) = delete;
    NewUniqueIdsDataLoadHelper(class NewUniqueIdsDataLoadHelper const &) = delete;
    NewUniqueIdsDataLoadHelper() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2072662513
     */
    virtual ~NewUniqueIdsDataLoadHelper();
    /**
     * @vftbl  1
     * @hash   -2080803375
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -2079879854
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -2078987085
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -2078032812
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -2077109291
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @hash   -2076170394
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @hash   -2075246873
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @hash   -2074323352
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -2073399831
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @hash   -1057345581
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -1056422060
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -1055498539
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol ?loadActorUniqueID@NewUniqueIdsDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
     * @hash   1632592613
     */
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    /**
     * @vftbl  14
     * @symbol ?loadOwnerID@NewUniqueIdsDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
     * @hash   -136001992
     */
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    /**
     * @vftbl  15
     * @symbol ?loadActorInternalComponentInfo@NewUniqueIdsDataLoadHelper@@UEAAPEBUComponentInfo@InternalComponentRegistry@@AEBV?$unordered_map@VHashedString@@UComponentInfo@InternalComponentRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UComponentInfo@InternalComponentRegistry@@@std@@@5@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
     * @hash   -541169921
     */
    virtual struct InternalComponentRegistry::ComponentInfo const * loadActorInternalComponentInfo(class std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct InternalComponentRegistry::ComponentInfo>>> const &, std::string const &);
    /**
     * @vftbl  16
     * @symbol ?getType@NewUniqueIdsDataLoadHelper@@UEBA?AW4DataLoadHelperType@@XZ
     * @hash   -1635457325
     */
    virtual enum class DataLoadHelperType getType() const;
    /**
     * @vftbl  17
     * @symbol ?shouldResetTime@NewUniqueIdsDataLoadHelper@@UEAA_NXZ
     * @hash   -1653111427
     */
    virtual bool shouldResetTime();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEWUNIQUEIDSDATALOADHELPER
    /**
     * @symbol ?loadBlockPosition@NewUniqueIdsDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
     * @hash   -1970569290
     */
    MCVAPI class BlockPos loadBlockPosition(class BlockPos const &);
    /**
     * @symbol ?loadBlockPositionOffset@NewUniqueIdsDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
     * @hash   -1428289213
     */
    MCVAPI class BlockPos loadBlockPositionOffset(class BlockPos const &);
    /**
     * @symbol ?loadDirection@NewUniqueIdsDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
     * @hash   -98197811
     */
    MCVAPI class Vec3 loadDirection(class Vec3 const &);
    /**
     * @symbol ?loadDirection@NewUniqueIdsDataLoadHelper@@UEAA?AW4Type@Direction@@W423@@Z
     * @hash   1815077975
     */
    MCVAPI enum class Direction::Type loadDirection(enum class Direction::Type);
    /**
     * @symbol ?loadFacingID@NewUniqueIdsDataLoadHelper@@UEAAEE@Z
     * @hash   -871553827
     */
    MCVAPI unsigned char loadFacingID(unsigned char);
    /**
     * @symbol ?loadMirror@NewUniqueIdsDataLoadHelper@@UEAA?AW4Mirror@@W42@@Z
     * @hash   981032755
     */
    MCVAPI enum class Mirror loadMirror(enum class Mirror);
    /**
     * @symbol ?loadPosition@NewUniqueIdsDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
     * @hash   -974371817
     */
    MCVAPI class Vec3 loadPosition(class Vec3 const &);
    /**
     * @symbol ?loadRotation@NewUniqueIdsDataLoadHelper@@UEAA?AW4Rotation@@W42@@Z
     * @hash   -734777420
     */
    MCVAPI enum class Rotation loadRotation(enum class Rotation);
    /**
     * @symbol ?loadRotationDegreesX@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     * @hash   204990611
     */
    MCVAPI float loadRotationDegreesX(float);
    /**
     * @symbol ?loadRotationDegreesY@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     * @hash   943740178
     */
    MCVAPI float loadRotationDegreesY(float);
    /**
     * @symbol ?loadRotationRadiansX@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     * @hash   -2088413954
     */
    MCVAPI float loadRotationRadiansX(float);
    /**
     * @symbol ?loadRotationRadiansY@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     * @hash   -1349664387
     */
    MCVAPI float loadRotationRadiansY(float);
#endif
    /**
     * @symbol ??0NewUniqueIdsDataLoadHelper@@QEAA@AEAVILevel@@@Z
     * @hash   -1285511854
     */
    MCAPI NewUniqueIdsDataLoadHelper(class ILevel &);

};