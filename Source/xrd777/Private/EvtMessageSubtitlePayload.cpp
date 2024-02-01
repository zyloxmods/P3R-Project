#include "EvtMessageSubtitlePayload.h"

FEvtMessageSubtitlePayload::FEvtMessageSubtitlePayload() {
    this->bUseMessage = false;
    this->MessageMajorID = 0;
    this->MessageMinorID = 0;
    this->MessageSubID = 0;
    this->MessagePageID = 0;
    this->BmdAsset = NULL;
    this->bMessageRefAffected = false;
    this->DrawFrame = 0;
    this->bPauseSequencer = false;
    this->bWithSelect = false;
    this->SelectID = 0;
    this->SelectMessageMajorID = 0;
    this->SelectMessageMinorID = 0;
    this->SelectMessageSubID = 0;
    this->SelectResponceToLocalDataID = 0;
}

