#include "EvtCharaPackFaceAnimationPayload.h"

FEvtCharaPackFaceAnimationPayload::FEvtCharaPackFaceAnimationPayload() {
    this->FaceAnimID = EAppCharFaceAnimID::EA_Normal;
    this->bLoop = false;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->PlayRate = 0.00f;
}

