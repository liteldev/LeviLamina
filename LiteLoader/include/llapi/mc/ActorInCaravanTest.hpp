/**
 * @file  ActorInCaravanTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../FilterTest.hpp"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInCaravanTest.
 *
 */
class ActorInCaravanTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINCARAVANTEST
public:
    class ActorInCaravanTest& operator=(class ActorInCaravanTest const &) = delete;
    ActorInCaravanTest(class ActorInCaravanTest const &) = delete;
    ActorInCaravanTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorInCaravanTest();
    /**
     * @hash   1457895392
     * @vftbl  2
     * @symbol  ?evaluate\@ActorInCaravanTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -1514435822
     * @vftbl  4
     * @symbol  ?getName\@ActorInCaravanTest\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};