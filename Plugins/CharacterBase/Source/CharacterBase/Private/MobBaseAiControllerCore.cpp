#include "MobBaseAiControllerCore.h"

void AMobBaseAiControllerCore::UpdateProc(float DeltaTime) {
}


void AMobBaseAiControllerCore::StartAiCtrl() {
}

void AMobBaseAiControllerCore::SetPointIndex(int32 Value) {
}

void AMobBaseAiControllerCore::ReStartAiCtrl() {
}

FMobWalkRoutePoint AMobBaseAiControllerCore::GetRoutePointNOW() const {
    return FMobWalkRoutePoint{};
}

FMobWalkRoutePoint AMobBaseAiControllerCore::GetRoutePointNEXT() const {
    return FMobWalkRoutePoint{};
}

int32 AMobBaseAiControllerCore::GetPointIndexLAST() {
    return 0;
}

int32 AMobBaseAiControllerCore::GetPointIndex() {
    return 0;
}

AMobWalkCharaBaseCore* AMobBaseAiControllerCore::GetOwnerActor() const {
    return NULL;
}

void AMobBaseAiControllerCore::AddPointIndex(int32 Value) {
}

AMobBaseAiControllerCore::AMobBaseAiControllerCore() {
    this->mTargetDistance_ = 50.00f;
    this->mTurnSpeed_ = 1.00f;
    this->mWalkMaxSpeed_ = 145.00f;
    this->mWalkStopTurnSpeedRatio_ = 0.40f;
    this->mWalkInterpTurnSpeedMIN_ = 45.00f;
    this->mWalkInterpTurnSpeedMAX_ = 120.00f;
    this->mShiftDirectionDistance_ = 150.00f;
    this->mShiftDirectionMinInterpSpeed_ = 15.00f;
    this->mShiftDirectionMaxInterpSpeed_ = 40.00f;
    this->mShiftDirectionTimeOut_ = 3.00f;
    this->mFollowWarpDistance_ = 300.00f;
    this->mDeleteInterval_ = 1.50f;
    this->mDeleteMoveMin_ = 40.00f;
    this->mDeleteTime_ = 0.50f;
    this->mOwnerActor_ = NULL;
    this->mNowDeltaTime_ = 0.00f;
    this->mAnimeRatio_ = 0.00f;
}

