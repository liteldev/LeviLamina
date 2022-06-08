// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VanillaDimensions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLADIMENSIONS
public:
    class VanillaDimensions& operator=(class VanillaDimensions const &) = delete;
    VanillaDimensions(class VanillaDimensions const &) = delete;
    VanillaDimensions() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLADIMENSIONS
#endif
    MCAPI static class AutomaticID<class Dimension, int> const Nether;
    MCAPI static class AutomaticID<class Dimension, int> const Overworld;
    MCAPI static class AutomaticID<class Dimension, int> const TheEnd;
    MCAPI static class Vec3 const TheEndSpawnPoint;
    MCAPI static class AutomaticID<class Dimension, int> const Undefined;
    MCAPI static bool convertPointBetweenDimensions(class Vec3 const &, class Vec3 &, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>, class DimensionConversionData const &);
    MCAPI static class AutomaticID<class Dimension, int> fromSerializedInt(int);
    MCAPI static class AutomaticID<class Dimension, int> fromString(std::string const &);
    MCAPI static int toSerializedInt(class AutomaticID<class Dimension, int> const &);
    MCAPI static std::string const toString(class AutomaticID<class Dimension, int> const &);

protected:
    MCAPI static class BidirectionalUnorderedMap<std::string, class AutomaticID<class Dimension, int>> const DimensionMap;

private:

};