#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct TagsProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk45d9de;
    // NOLINTEND

public:
    // prevent constructor by default
    TagsProxy(TagsProxy const&);
    TagsProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void fromString(::std::string const& expression);

    MCFOLD ::BlockDescriptorSerializer::TagsProxy& operator=(::BlockDescriptorSerializer::TagsProxy const&);

    MCFOLD ::BlockDescriptorSerializer::TagsProxy& operator=(::BlockDescriptorSerializer::TagsProxy&&);

    MCAPI ~TagsProxy();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace BlockDescriptorSerializer
