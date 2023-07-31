#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class ZipProgress {

public:
    // prevent constructor by default
    ZipProgress& operator=(ZipProgress const&) = delete;
    ZipProgress(ZipProgress const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?clear\@ZipProgress\@ZipUtils\@Core\@\@UEAAXXZ
     */
    virtual void clear();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_ZIPUTILS_ZIPPROGRESS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ZipProgress();
#endif
    /**
     * @symbol ??0ZipProgress\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI ZipProgress();
    // NOLINTEND
};

}; // namespace Core::ZipUtils