#include "Draft_EventManager.h"

void ADEPRECATED_Draft_EventManager::SetLocalData(int32 Index, int32 Data) {
}

void ADEPRECATED_Draft_EventManager::ResumeEventSequencer() {
}

int32 ADEPRECATED_Draft_EventManager::GetLocalData(int32 Index) const {
    return 0;
}

void ADEPRECATED_Draft_EventManager::ForcedRemoveMessage() {
}

int32 ADEPRECATED_Draft_EventManager::ExecuteSelectScript() {
    return 0;
}

int32 ADEPRECATED_Draft_EventManager::ExecuteMsgScript() {
    return 0;
}

void ADEPRECATED_Draft_EventManager::ExecuteMessageWithSelect(UBmdAsset* InAsset, int32 InMessageNo, int32 InSelectNo, int32 InEventMessageID) {
}

void ADEPRECATED_Draft_EventManager::ExecuteMessage(UBmdAsset* InAsset, int32 InMessageNo, int32 InEventMessageID) {
}

void ADEPRECATED_Draft_EventManager::CloseMessage() {
}

ADEPRECATED_Draft_EventManager::ADEPRECATED_Draft_EventManager() {
    this->mpBmdAsset = NULL;
    this->ExecutingMessageNo = 0;
    this->MessageState = EEventManagerMessageState::Invalid;
    this->EventSequencePlayer = NULL;
    this->RequestedSeqClosedEventMessageID = 0;
    this->SeqControllerState = EEventManagerSeqControllerState::Idle;
}

