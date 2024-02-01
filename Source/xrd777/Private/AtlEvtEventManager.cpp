#include "AtlEvtEventManager.h"

void AAtlEvtEventManager::SetLocalData(int32 Index, int32 Data) {
}

void AAtlEvtEventManager::ResumeEventSequencer() {
}

void AAtlEvtEventManager::OnFinishedAtlScr(int32 ExitType) {
}

bool AAtlEvtEventManager::IsPlaying() {
    return false;
}

bool AAtlEvtEventManager::IsEventRankA() const {
    return false;
}

int32 AAtlEvtEventManager::GetLocalData(int32 Index) const {
    return 0;
}

void AAtlEvtEventManager::ForcedStopScript() {
}

void AAtlEvtEventManager::ForcedRemoveMessage() {
}

void AAtlEvtEventManager::ForceClick(FKey Key, TEnumAsByte<EInputEvent> EventType) {
}

int32 AAtlEvtEventManager::ExecuteSelectScript() {
    return 0;
}

void AAtlEvtEventManager::ExecuteScript(UBfAsset* InAsset, int32 InProcNo, bool bUseBmdAssetInBfAsset, UBmdAsset* InBmdAsset) {
}

int32 AAtlEvtEventManager::ExecuteMsgScript() {
    return 0;
}

void AAtlEvtEventManager::ExecuteMessageWithSelect(UBmdAsset* InAsset, int32 InMessageNo, int32 InSelectNo, int32 InSelectResponceToLocalDataID, int32 InSeqEventMessageID) {
}

void AAtlEvtEventManager::ExecuteMessage(UBmdAsset* InAsset, int32 InMessageNo, int32 InEventMessageID) {
}

void AAtlEvtEventManager::ExecuteBmdMessageWithSelect(UBmdAsset* InAsset, int32 InMessageMajorID, int32 InMessageMinorID, int32 InMessageSubID, int32 InMessagePageID, int32 InSelectMessageMajorID, int32 InSelectMessageMinorID, int32 InSelectMessageSubID, int32 InSelectResponceToLocalDataID, bool bInEnableMessageRef, int32 InEventMessageID) {
}

void AAtlEvtEventManager::ExecuteBmdMessageSubtitleWithSelect(UBmdAsset* InAsset, int32 InMessageMajorID, int32 InMessageMinorID, int32 InMessageSubID, int32 InMessagePageID, int32 InDrawFrame, int32 InSelectMessageMajorID, int32 InSelectMessageMinorID, int32 InSelectMessageSubID, int32 InSelectResponceToLocalDataID, bool bInEnableMessageRef, int32 InSeqEventMessageID) {
}

void AAtlEvtEventManager::ExecuteBmdMessageSubtitleSelect(UBmdAsset* InAsset, int32 InSelectMessageMajorID, int32 InSelectMessageMinorID, int32 InSelectMessageSubID, int32 InSelectResponceToLocalDataID) {
}

void AAtlEvtEventManager::ExecuteBmdMessageSubtitle(UBmdAsset* InAsset, int32 InMessageMajorID, int32 InMessageMinorID, int32 InMessageSubID, int32 InMessagePageID, int32 InDrawFrame, bool bInEnableMessageRef, int32 InSeqEventMessageID) {
}

void AAtlEvtEventManager::ExecuteBmdMessage(UBmdAsset* InAsset, int32 InMessageMajorID, int32 InMessageMinorID, int32 InMessageSubID, int32 InMessagePageID, bool bInEnableMessageRef, int32 InSeqEventMessageID) {
}

void AAtlEvtEventManager::CloseMessage() {
}

void AAtlEvtEventManager::BackLogFinishDelegte() {
}

void AAtlEvtEventManager::AtlEvt_ResumeEventSequencer() {
}

AAtlEvtEventManager::AAtlEvtEventManager() {
    this->FieldCameraActor = NULL;
    this->MovieSceneCameraActor = NULL;
    this->EventRank = EEventManagerEventRank::EventRankA;
    this->EventSkipWidget = NULL;
    this->mpBmdAsset = NULL;
    this->BmdAssetMsgID = 0;
    this->ExecutingMessageNo = 0;
    this->MessageState = EEventManagerMessageState::Invalid;
    this->ScrActor = NULL;
    this->UIBackLogActor = NULL;
    this->UINetAnswerActor = NULL;
    this->EventSequencePlayer = NULL;
    this->RequestedSeqClosedEventMessageID = 0;
    this->SeqControllerState = EEventManagerSeqControllerState::Idle;
    this->PauseControllerActor = NULL;
    this->MoviePlayManager = NULL;
}

