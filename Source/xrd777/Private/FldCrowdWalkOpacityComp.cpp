#include "FldCrowdWalkOpacityComp.h"

void UFldCrowdWalkOpacityComp::SetPointLocation(FVector StartPoint, FVector EndPoint) {
}

UFldCrowdWalkOpacityComp::UFldCrowdWalkOpacityComp() {
    this->mSpeedLoc_ = 1.00f;
    this->mInvisibleRadiusLoc_ = 200.00f;
    this->mDisappearRadiusLoc_ = 80.00f;
    this->mOpacityLoc_ = 1.00f;
}

