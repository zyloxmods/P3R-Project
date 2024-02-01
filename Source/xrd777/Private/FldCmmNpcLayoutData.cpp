#include "FldCmmNpcLayoutData.h"

FFldCmmNpcLayoutData::FFldCmmNpcLayoutData() {
    this->mUniqueID = 0;
    this->mArcanaID = 0;
    this->mFieldPartsID = 0;
    this->mType = EFldCmmNpcType::Cmm;
    this->mIconType = EFldHitCharaIconType::None;
    this->mNameIndex = 0;
    this->bNotMapInfo = false;
}

