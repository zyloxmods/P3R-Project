#include "FldCrowdOpacityComp.h"

void UFldCrowdOpacityComp::UpdateProc(float DeltaTime) {
}

UFldCrowdOpacityComp::UFldCrowdOpacityComp() {
    this->mTargetOpacity_ = 0.00f;
    this->mSpeed_ = 1.00f;
    this->mInvisibleRadius_ = 200.00f;
    this->mDisappearRadius_ = 40.00f;
    this->mOpacity_ = 1.00f;
}

