#include "FldNpcLayoutData.h"

FFldNpcLayoutData::FFldNpcLayoutData() {
    this->mMajorID = 0;
    this->mMinorID = 0;
    this->mFieldPartsID = 0;
    this->mType = EFldNpcActorType::Normal;
    this->mIconType = EFldHitCharaIconType::None;
    this->mNameIndex = 0;
    this->bNotMapInfo = false;
}

