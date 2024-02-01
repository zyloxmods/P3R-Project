#include "FldAnimalComp_BIRD.h"

UFldAnimalComp_BIRD::UFldAnimalComp_BIRD() {
    this->bWalkAfterLanding_ = false;
    this->mFlyPitch_ = 30.00f;
    this->mFlyAwayTime_ = 0.70f;
    this->mFlyAwayDist_ = 2000.00f;
    this->mComebackTime_ = 1.50f;
    this->mComebackDist_ = 2000.00f;
    this->bAutoFlyAway_ = false;
    this->mAutoFlyAwayTimeFix_ = 10.00f;
    this->mAutoFlyAwayTimeRnd_ = 5.00f;
    this->mAutoFlyAwayYaw_ = 180.00f;
    this->bIsMove_ = true;
    this->mMoveTimeFix_ = 5.00f;
    this->mMoveTimeRnd_ = 2.00f;
    this->mMoveDist_ = 90.00f;
    this->mMoveRadius_ = 150.00f;
}

