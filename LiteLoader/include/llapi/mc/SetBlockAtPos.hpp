/**
 * @file  MC/SetBlockAtPos.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetBlockAtPos.
 *
 */
class SetBlockAtPos {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETBLOCKATPOS
public:
    class SetBlockAtPos& operator=(class SetBlockAtPos const &) = delete;
    SetBlockAtPos(class SetBlockAtPos const &) = delete;
    SetBlockAtPos() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetBlockAtPos();
    /**
     * @hash   -269573405
     * @vftbl  1
     * @symbol ?getName@SetBlockAtPos@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1461402357
     * @vftbl  2
     * @symbol ?executeAction@SetBlockAtPos@@UEBAXAEAVRenderParams@@@Z
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @hash   -1106027327
     * @vftbl  3
     * @symbol ?buildSchema@SetBlockAtPos@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
    /**
     * @hash   -1630348919
     * @symbol ?NameID@SetBlockAtPos@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;

};