/**
 * @file  IsWaterLoggedTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class IsWaterLoggedTest.
 *
 */
class IsWaterLoggedTest : public FilterTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISWATERLOGGEDTEST
public:
    class IsWaterLoggedTest& operator=(class IsWaterLoggedTest const &) = delete;
    IsWaterLoggedTest(class IsWaterLoggedTest const &) = delete;
    IsWaterLoggedTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -384489873
     */
    virtual ~IsWaterLoggedTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@IsWaterLoggedTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   546210243
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@IsWaterLoggedTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -512916017
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};