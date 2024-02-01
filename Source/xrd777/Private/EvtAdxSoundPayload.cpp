#include "EvtAdxSoundPayload.h"

FEvtAdxSoundPayload::FEvtAdxSoundPayload() {
    this->PlayerMajorID = 0;
    this->PlayerMinorID = 0;
    this->CueId = 0;
    this->EvtSoundCategoryType = EEvtSoundCategoryType::GlobalBGM;
    this->EvtAdxSoundOperationType = EEvtAdxTrackSoundOperationType::Play;
    this->bStopWhileHighSpeed = false;
}

