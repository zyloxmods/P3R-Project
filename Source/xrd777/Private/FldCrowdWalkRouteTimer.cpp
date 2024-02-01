#include "FldCrowdWalkRouteTimer.h"

FFldCrowdWalkRouteTimer::FFldCrowdWalkRouteTimer() {
    this->mTimer_ = 0.00f;
    this->mLoopTime_ = 0.00f;
    this->mRoutePattern = EFldCrowdRoutePtn::Normal;
}

