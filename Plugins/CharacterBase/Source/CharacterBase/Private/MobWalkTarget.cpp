#include "MobWalkTarget.h"

EMobWalkTargetType AMobWalkTarget::GetTargetType() {
    return EMobWalkTargetType::Normal;
}

AMobWalkTarget::AMobWalkTarget() {
    this->mType_ = EMobWalkTargetType::Normal;
}

