#include "FldCmmActor.h"

AFldCmmActor::AFldCmmActor() {
    this->mUniqueId_ = 0;
    this->mType_ = EFldCmmNpcType::Normal;
    this->mNameIndex_ = -1;
    this->mNotMapInfoDisp_ = false;
    this->bMapIconDirectLocation_ = false;
}

