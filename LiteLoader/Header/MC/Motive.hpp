// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Motive {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOTIVE
public:
    class Motive& operator=(class Motive const &) = delete;
    Motive(class Motive const &) = delete;
    Motive() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOTIVE
#endif
    MCAPI int getHeight() const;
    MCAPI std::string const getName() const;
    MCAPI int getWidth() const;
    MCAPI bool isPublic() const;
    MCAPI static std::vector<class Motive const *> getAllMotivesAsList();
    MCAPI static class Motive const & getMotiveByName(std::string const &);
    MCAPI static class Motive const mAlban;
    MCAPI static class Motive const mAztec;
    MCAPI static class Motive const mAztec2;
    MCAPI static class Motive const mBomb;
    MCAPI static class Motive const mBurningSkull;
    MCAPI static class Motive const mBust;
    MCAPI static class Motive const mCourbet;
    MCAPI static class Motive const mCreebet;
    MCAPI static class Motive const & mDefaultImage;
    MCAPI static class Motive const mDonkeyKong;
    MCAPI static class Motive const mEarth;
    MCAPI static class Motive const mFighters;
    MCAPI static class Motive const mFire;
    MCAPI static class Motive const mGraham;
    MCAPI static class Motive const mKebab;
    MCAPI static class Motive const mMatch;
    MCAPI static class Motive const mPigscene;
    MCAPI static class Motive const mPlant;
    MCAPI static class Motive const mPointer;
    MCAPI static class Motive const mPool;
    MCAPI static class Motive const mSea;
    MCAPI static class Motive const mSkeleton;
    MCAPI static class Motive const mSkullAndRoses;
    MCAPI static class Motive const mStage;
    MCAPI static class Motive const mSunset;
    MCAPI static class Motive const mVoid;
    MCAPI static class Motive const mWanderer;
    MCAPI static class Motive const mWasteland;
    MCAPI static class Motive const mWater;
    MCAPI static class Motive const mWind;
    MCAPI static class Motive const mWither;

protected:

private:

};