#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

namespace Scripting {

struct EngineError : public ::Scripting::Error {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI EngineError();

    MCAPI ~EngineError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
