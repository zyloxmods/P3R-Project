#include "EvtCharaPackAnimationPayload.h"

FEvtCharaPackAnimationPayload::FEvtCharaPackAnimationPayload() {
    this->AnimId = ECommonAnimID::BLANK;
    this->UsingAnimIDType = EEvtCharaAnimationPackIDType::Event;
    this->EventAnimID = EEventAnimID::BLANK;
    this->CommonAnimID = ECommonAnimID::BLANK;
    this->DungeonAnimID = EDungeonAnimID::BLANK;
    this->bLoop = false;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->PlayRate = 0.00f;
    this->bBagSlot = false;
    this->MultiAnimCharaAnimationType = EEvtCharaAnimationType::SimpleMontage;
}

