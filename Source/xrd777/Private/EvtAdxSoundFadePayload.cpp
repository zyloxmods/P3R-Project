#include "EvtAdxSoundFadePayload.h"

FEvtAdxSoundFadePayload::FEvtAdxSoundFadePayload() {
    this->Type = EEvtAdxSoundFadeType::FADE_IN;
    this->Time = 0;
    this->TargetVolume = 0.00f;
}

