#include "EvtScriptPayload.h"

FEvtScriptPayload::FEvtScriptPayload() {
    this->ProcNo = 0;
    this->BfAsset = NULL;
    this->bPauseSequencer = false;
    this->bUseBmdAssetInBfAsset = false;
    this->BmdAsset = NULL;
}

