#include "FldAnimalComp_CAT.h"

UFldAnimalComp_CAT::UFldAnimalComp_CAT() {
    this->mEscapeTime_ = 0.50f;
    this->mEscapeDist_ = 500.00f;
    this->mComebackDist_ = 200.00f;
    this->bEscapeYawFixed_ = false;
    this->mEscapeFixedYaw_ = 0.00f;
    this->bAutoWalkAway_ = false;
    this->mAutoWalkAwayTimeFix_ = 10.00f;
    this->mAutoWalkAwayTimeRnd_ = 5.00f;
    this->mAutoWalkAwayYaw_ = 180.00f;
    this->mAutoWalkAwayDist_ = 300.00f;
    this->bFixedMove_ = false;
    this->mFixedMoveTimeFix_ = 10.00f;
    this->mFixedMoveTimeRnd_ = 5.00f;
}

