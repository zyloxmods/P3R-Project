#include "DungeonUISprData.h"

FDungeonUISprData::FDungeonUISprData() {
    this->SprType = EDungeonUISpriteType::SituationHelp;
    this->grpNo = 0;
    this->SprNo = 0;
    this->Origin = EDungeonUISpriteOrigin::LeftUp;
    this->RGBA[0] = 0;
    this->RGBA[1] = 0;
    this->RGBA[2] = 0;
    this->RGBA[3] = 0;
    this->ScaleMin[0] = 0.00f;
    this->ScaleMin[1] = 0.00f;
    this->ScaleMax[0] = 0.00f;
    this->ScaleMax[1] = 0.00f;
    this->MsgWSync = false;
}

