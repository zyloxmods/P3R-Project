#include "MobWalkCharaBaseCore.h"

void AMobWalkCharaBaseCore::SetWaitTime(float InTime) {
}

void AMobWalkCharaBaseCore::SetStartLocation(FVector InLocation) {
}

void AMobWalkCharaBaseCore::SetPointIndex(int32 Value) {
}

void AMobWalkCharaBaseCore::SetOpacityCore(float Value) {
}

void AMobWalkCharaBaseCore::SetFollowRelativeLocation(FVector InLocation) {
}

void AMobWalkCharaBaseCore::SetFollowParent(AActor* InParent) {
}

void AMobWalkCharaBaseCore::SetBpIndex(int32 Value) {
}

void AMobWalkCharaBaseCore::InitPointList() {
}

float AMobWalkCharaBaseCore::GetWaitTime() const {
    return 0.0f;
}

FVector AMobWalkCharaBaseCore::GetStartLocation() const {
    return FVector{};
}

int32 AMobWalkCharaBaseCore::GetPointListMax() {
    return 0;
}

FMobWalkRoutePoint AMobWalkCharaBaseCore::GetPointList_START() const {
    return FMobWalkRoutePoint{};
}

FMobWalkRoutePoint AMobWalkCharaBaseCore::GetPointList_LAST() const {
    return FMobWalkRoutePoint{};
}

FMobWalkRoutePoint AMobWalkCharaBaseCore::GetPointList(int32 Index) const {
    return FMobWalkRoutePoint{};
}

int32 AMobWalkCharaBaseCore::GetPointIndex() const {
    return 0;
}

float AMobWalkCharaBaseCore::GetOpacityCore() const {
    return 0.0f;
}

FVector AMobWalkCharaBaseCore::GetFollowRelativeLocation() const {
    return FVector{};
}

AActor* AMobWalkCharaBaseCore::GetFollowParent() const {
    return NULL;
}

int32 AMobWalkCharaBaseCore::GetBpIndex() const {
    return 0;
}

void AMobWalkCharaBaseCore::AddPointList(FMobWalkRoutePoint InPoint) {
}

AMobWalkCharaBaseCore::AMobWalkCharaBaseCore() {
    this->mBpIndex_ = 0;
    this->mOpacityCore_ = 0.00f;
    this->mPointIndex_ = -1;
    this->mWaitTime_ = 0.00f;
    this->mFollowParent_ = NULL;
    this->mStartState_ = EMobWalkStartState::Start;
}

