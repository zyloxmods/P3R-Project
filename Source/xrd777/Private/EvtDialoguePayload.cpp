#include "EvtDialoguePayload.h"

FEvtDialoguePayload::FEvtDialoguePayload() {
    this->MessageNo = 0;
    this->MessageMajorID = 0;
    this->MessageMinorID = 0;
    this->MessageSubID = 0;
    this->MessagePageID = 0;
    this->BmdAsset = NULL;
    this->bMessageRefAffected = false;
    this->bPauseSequencer = false;
    this->EventMessageID = 0;
    this->SeqEventMessageID = 0;
    this->bWithSelect = false;
    this->SelectID = 0;
    this->SelectMessageMajorID = 0;
    this->SelectMessageMinorID = 0;
    this->SelectMessageSubID = 0;
    this->SelectResponceToLocalDataID = 0;
}

