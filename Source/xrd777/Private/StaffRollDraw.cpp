#include "StaffRollDraw.h"

void AStaffRollDraw::Draw() {
}

AStaffRollDraw::AStaffRollDraw() {
    this->PictOutWaitFrame = 120.00f;
    this->PictOutMoveFrame = 120.00f;
    this->PictInWaitFrame = 60.00f;
    this->PictInMoveFrame = 120.00f;
    this->SceneAnimOutWaitFrame = 0.00f;
    this->SceneAnimOutMoveFrame = 0.00f;
    this->SceneAnimInWaitFrame = 0.00f;
    this->SceneAnimInMoveFrame = 0.00f;
    this->SoundSwitchWaitSec = 30.00f;
    this->SoundFadeFrame = 10;
    this->DataList = NULL;
    this->SprData = NULL;
}

