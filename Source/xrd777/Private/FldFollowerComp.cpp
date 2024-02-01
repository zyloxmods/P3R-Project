#include "FldFollowerComp.h"

void UFldFollowerComp::ProcOutEvent(AActor* OtherActor) {
}

void UFldFollowerComp::ProcInEvent(AActor* OtherActor) {
}

void UFldFollowerComp::GetAwayHeroRequest() {
}

void UFldFollowerComp::CleanupRequest() {
}

void UFldFollowerComp::CheckEnableAction(APawn* Player, bool& Check) {
}

void UFldFollowerComp::ActoinRequest(APawn* Player) {
}

UFldFollowerComp::UFldFollowerComp() {
    this->mLengthLEAVE_START_ = 0.00f;
    this->mLengthLEAVE_END_ = 0.00f;
    this->mLengthAPPROACH_START_ = 0.00f;
    this->mLengthAPPROACH_END_ = 0.00f;
    this->mLengthALLAY_NEAR_ = 0.00f;
    this->mLengthSPEAK_HERO_ = 60.00f;
    this->mIdleMinTime_ = 10.00f;
    this->mIdleMaxTime_ = 15.00f;
    this->mLookMinTime_ = 4.00f;
    this->mLookMaxTime_ = 8.00f;
    this->mSideMinTime_ = 6.00f;
    this->mSideMaxTime_ = 8.00f;
    this->mInterpSpeed_ = 1.20f;
    this->mFlag_ = 0;
    this->mFollowerIndex_ = 0;
    this->mApprouchRad_ = 0.00f;
    this->mCharaComp_ = NULL;
    this->mCapsuleComp_ = NULL;
    this->mMoveComp_ = NULL;
    this->mHitChild_ = NULL;
    this->mNpcComp_ = NULL;
    this->mPointComp_ = NULL;
    this->bIsLookAt_ = false;
    this->mLookTimer_ = 0.00f;
    this->mLookEndTime_ = 0.00f;
    this->mLookYawDir_ = 0;
    this->mLookCount_ = 0;
}

