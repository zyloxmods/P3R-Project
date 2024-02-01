#include "BtlTargetsManagerComponent.h"

void UBtlTargetsManagerComponent::SetTargets(TArray<ABtlActor*> List) {
}

void UBtlTargetsManagerComponent::SetMainCharacter(ABtlActor* Character) {
}

void UBtlTargetsManagerComponent::SetCursorTargets(TArray<ABtlActor*> List) {
}

TArray<ABtlActor*> UBtlTargetsManagerComponent::GetTargets() {
    return TArray<ABtlActor*>();
}

ABtlActor* UBtlTargetsManagerComponent::GetMainCharacter() {
    return NULL;
}

TArray<ABtlActor*> UBtlTargetsManagerComponent::GetEffectTargets() {
    return TArray<ABtlActor*>();
}

TArray<ABtlActor*> UBtlTargetsManagerComponent::GetCursorTargets() {
    return TArray<ABtlActor*>();
}

TArray<ABtlActor*> UBtlTargetsManagerComponent::GetConstTargets() const {
    return TArray<ABtlActor*>();
}


void UBtlTargetsManagerComponent::Clear() {
}

bool UBtlTargetsManagerComponent::CheckTargetIsNextActionCharacter(UBtlCoreComponent* pCore) const {
    return false;
}

bool UBtlTargetsManagerComponent::CheckTargetIsLatestActionCharacter(UBtlCoreComponent* pCore) const {
    return false;
}

UBtlTargetsManagerComponent::UBtlTargetsManagerComponent() {
    this->MainCharacter = NULL;
}

