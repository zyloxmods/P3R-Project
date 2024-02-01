#include "FldPlayerAttackData.h"

FFldPlayerAttackData::FFldPlayerAttackData() {
    this->AnimId = EDungeonAnimID::BLANK;
    this->AnimBlendTime = 0.00f;
    this->WeaponAnimId = 0;
    this->BeginReceivingInputTime = 0.00f;
    this->EndReceivingInputTime = 0.00f;
    this->SwitchNextAttackTime = 0.00f;
    this->SwitchFreeStateTime = 0.00f;
    this->SlideRot = 0.00f;
    this->SlideScaleTime = 0.00f;
    this->SlideScale = 0.00f;
    this->VoiceId = 0;
    this->NextAttackId = 0;
}

