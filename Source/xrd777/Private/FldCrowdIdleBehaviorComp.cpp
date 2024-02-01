#include "FldCrowdIdleBehaviorComp.h"

void UFldCrowdIdleBehaviorComp::UpdateProc(float DeltaTime) {
}

UFldCrowdIdleBehaviorComp::UFldCrowdIdleBehaviorComp() {
    this->mLoopPitchTime_ = 2.00f;
    this->mPitchRadius_ = 0.60f;
    this->mLoopRollTime_ = 1.80f;
    this->mRollRadius_ = 0.60f;
    this->mPitchTimer_ = 0.00f;
    this->mPitchDir_ = 1;
    this->mRollTimer_ = 0.00f;
    this->mRollDir_ = 1;
}

