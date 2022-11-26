/**
 * @file  FilterTestHasTradeSupply.hpp
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
 * @brief MC class FilterTestHasTradeSupply.
 *
 */
class FilterTestHasTradeSupply : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTHASTRADESUPPLY
public:
    class FilterTestHasTradeSupply& operator=(class FilterTestHasTradeSupply const &) = delete;
    FilterTestHasTradeSupply(class FilterTestHasTradeSupply const &) = delete;
    FilterTestHasTradeSupply() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1974740749
     */
    virtual ~FilterTestHasTradeSupply();
    /**
     * @vftbl  2
     * @symbol ?evaluate@FilterTestHasTradeSupply@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -1152822251
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@FilterTestHasTradeSupply@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -1693018131
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};