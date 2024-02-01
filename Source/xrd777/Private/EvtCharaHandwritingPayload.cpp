#include "EvtCharaHandwritingPayload.h"

FEvtCharaHandwritingPayload::FEvtCharaHandwritingPayload() {
    this->OwnerType = EEvtCharaHandwritingSpawnOwnerType::CharacterDefault;
    this->bAttached = false;
    this->HandwritingType = EAtlEvtHandwritingType::AngerMark;
    this->LoopCount = 0;
    this->CameraOffset = 0.00f;
}

