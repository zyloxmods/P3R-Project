#include "FldNpcActor.h"

AFldNpcActor::AFldNpcActor() {
    this->mMajorID_ = 0;
    this->mMinorID_ = 0;
    this->mType_ = EFldNpcActorType::Normal;
    this->mNameIndex_ = -1;
    this->mNotMapInfoDisp_ = false;
    this->bMapIconDirectLocation_ = false;
}

