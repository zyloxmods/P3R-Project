#include "FldNpcLayoutTableRow.h"

FFldNpcLayoutTableRow::FFldNpcLayoutTableRow() {
    this->FieldMajor = 0;
    this->FieldMinor = 0;
    this->FieldParts = 0;
    this->TimeType = 0;
    this->KeyfreeEventID = 0;
    this->majorId = 0;
    this->minorId = 0;
    this->Type = EFldNpcActorType::Normal;
    this->IconType = EFldHitCharaIconType::None;
    this->NameIndex = 0;
    this->NotMapInfo = false;
}

