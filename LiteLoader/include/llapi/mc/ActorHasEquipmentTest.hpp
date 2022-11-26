/**
 * @file  ActorHasEquipmentTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorHasEquipmentTest.
 *
 */
class ActorHasEquipmentTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHASEQUIPMENTTEST
public:
    class ActorHasEquipmentTest& operator=(class ActorHasEquipmentTest const &) = delete;
    ActorHasEquipmentTest(class ActorHasEquipmentTest const &) = delete;
    ActorHasEquipmentTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1075868631
     */
    virtual ~ActorHasEquipmentTest();
    /**
     * @vftbl  1
     * @symbol ?setup@ActorHasEquipmentTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
     * @hash   1789631807
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorHasEquipmentTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -1388713443
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?getName@ActorHasEquipmentTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -172431275
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @vftbl  5
     * @symbol ?_serializeDomain@ActorHasEquipmentTest@@MEBA?AVValue@Json@@XZ
     * @hash   -1756485575
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @vftbl  6
     * @symbol ?_serializeValue@ActorHasEquipmentTest@@MEBA?AVValue@Json@@XZ
     * @hash   54857796
     */
    virtual class Json::Value _serializeValue() const;

};