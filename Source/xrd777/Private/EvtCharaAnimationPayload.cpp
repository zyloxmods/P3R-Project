#include "EvtCharaAnimationPayload.h"

FEvtCharaAnimationPayload::FEvtCharaAnimationPayload() {
    this->Animation = NULL;
    this->SlotType = EEvtCharaAnimationSlotType::User;
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
    this->BlendIn = 0.00f;
    this->BlendOut = 0.00f;
    this->PlayRate = 0.00f;
    this->CharaAnimationType = EEvtCharaAnimationType::SimpleMontage;
}

