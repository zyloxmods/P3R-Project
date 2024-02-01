#include "FldNpcComp.h"

void UFldNpcComp::RequestRestartAnimProcByMotion() {
}

void UFldNpcComp::RequestPauseAnimProcByMotion() {
}

void UFldNpcComp::RequestLookAtPlayerByMotion() {
}

UAppCharBaseComp* UFldNpcComp::GetCharBaseComp() {
    return NULL;
}

UFldNpcComp::UFldNpcComp() {
    this->mCharaBaseComp_ = NULL;
    this->mListIndex_ = -1;
    this->mMajorID_ = -1;
    this->mMinorID_ = -1;
    this->mFbnNumber_ = -1;
    this->mSpeakMotionBlendInTime_ = 0.04f;
    this->mSpeakMotionBlendOutTime_ = 0.25f;
}

