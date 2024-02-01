#include "FldHitActor.h"

AFldHitActor::AFldHitActor() {
    this->mMajorID_ = 0;
    this->mMinorID_ = 0;
    this->mType_ = EFldHitType::Normal;
    this->mNameIndex_ = -1;
    this->mIconType_ = EFldHitActorIconType::None;
    this->mFloorIndex_ = 0;
    this->mIconActor_ = NULL;
}

