#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CameraShakeAction {};

#include "mc/deps/core/common/bedrock/typeid_t.h"
MCTAPI class Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<class CommandRegistry, enum class CameraShakeAction>(void);