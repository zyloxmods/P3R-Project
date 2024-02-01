#include "BtlActionManagerComponent.h"

void UBtlActionManagerComponent::SetCommandWithTargets(ABtlActor* commander, EBtlCommandType Type, int32 ID, TArray<ABtlActor*> Targets) {
}

void UBtlActionManagerComponent::SetCommandTargets(TArray<ABtlActor*> Targets) {
}

void UBtlActionManagerComponent::SetCommander(ABtlActor* commander) {
}

void UBtlActionManagerComponent::SetCommand(ABtlActor* commander, EBtlCommandType Type, int32 ID) {
}

void UBtlActionManagerComponent::DoCommand() {
}

void UBtlActionManagerComponent::ClearCommand() {
}

UBtlActionManagerComponent::UBtlActionManagerComponent() {
    this->ActionCommander = NULL;
    this->ActionType = EBtlCommandType::BTL_ACT_NULL;
    this->ActionID = 0;
    this->TargetsManager = NULL;
}

