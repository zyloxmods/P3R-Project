#include "BtlEventController.h"



bool UBtlEventController::IsPlayingEvent() {
    return false;
}

bool UBtlEventController::HasEventScriptForBP(FBtlEncountParam EncParam) {
    return false;
}

void UBtlEventController::EventStart(EBtlEventType EventType) {
}

void UBtlEventController::CommonEventStart(EBtlCommonEventType EventType) {
}

UBtlEventController::UBtlEventController() {
    this->bLoadCompleted = false;
    this->bCommonLoadCompleted = false;
    this->pBfCommonAsset = NULL;
    this->pBmdCommonAsset = NULL;
    this->pBfAsset = NULL;
    this->pBmdAsset = NULL;
    this->pEventActor = NULL;
    this->BtlCore = NULL;
    this->SequencerObserveClass = NULL;
}

