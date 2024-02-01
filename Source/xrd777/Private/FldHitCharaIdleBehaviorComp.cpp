#include "FldHitCharaIdleBehaviorComp.h"

UFldHitCharaIdleBehaviorComp::UFldHitCharaIdleBehaviorComp() {
    this->mIdleMinTime_ = 10.00f;
    this->mIdleMaxTime_ = 15.00f;
    this->mLookMinTime_ = 4.00f;
    this->mLookMaxTime_ = 8.00f;
    this->mSideMinTime_ = 6.00f;
    this->mSideMaxTime_ = 8.00f;
    this->mInterpSpeed_ = 1.20f;
    this->mFlag_ = 0;
    this->mNpcComp_ = NULL;
    this->bIsLookAt_ = false;
    this->mLookTimer_ = 0.00f;
    this->mLookEndTime_ = 1.00f;
    this->mLookYawDir_ = 0;
    this->mLookCount_ = 0;
}

