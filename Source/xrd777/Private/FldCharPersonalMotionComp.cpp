#include "FldCharPersonalMotionComp.h"

UFldCharPersonalMotionComp::UFldCharPersonalMotionComp() {
    this->mIdolTime_FIX_ = 10.00f;
    this->mIdolTime_RAND_ = 3.00f;
    this->mBlendTime_START_ = 0.30f;
    this->mBlendTime_END_ = 0.30f;
    this->mCharComp_ = NULL;
    this->mTimer_ = 0.00f;
    this->mMaxTime_ = 1.00f;
    this->mAnimMontage_ = NULL;
}

