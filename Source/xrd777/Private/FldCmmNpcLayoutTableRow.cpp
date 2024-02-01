#include "FldCmmNpcLayoutTableRow.h"

FFldCmmNpcLayoutTableRow::FFldCmmNpcLayoutTableRow() {
    this->FieldMajor = 0;
    this->FieldMinor = 0;
    this->FieldParts = 0;
    this->TimeType = 0;
    this->KeyfreeEventID = 0;
    this->UniqueId = 0;
    this->ArcanaID = 0;
    this->Type = EFldCmmNpcType::Cmm;
    this->IconType = EFldHitCharaIconType::None;
    this->NameIndex = 0;
    this->NotMapInfo = false;
}

