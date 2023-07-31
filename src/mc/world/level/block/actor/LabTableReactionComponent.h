#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LabTableReactionComponent {

public:
    // prevent constructor by default
    LabTableReactionComponent& operator=(LabTableReactionComponent const&) = delete;
    LabTableReactionComponent(LabTableReactionComponent const&)            = delete;
    LabTableReactionComponent()                                            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LABTABLEREACTIONCOMPONENT
    /**
     * @symbol ?_onEnd\@LabTableReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onEnd(class LabTableReaction&, class BlockSource&);
    /**
     * @symbol ?_onStart\@LabTableReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onStart(class LabTableReaction&, class BlockSource&);
    /**
     * @symbol ?_onTick\@LabTableReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onTick(class LabTableReaction&, class BlockSource&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LabTableReactionComponent();
#endif
    // NOLINTEND
};