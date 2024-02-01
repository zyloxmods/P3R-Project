#include "BtlGuiPersonaStatusComponent.h"

void UBtlGuiPersonaStatusComponent::UpdatePersonaStatus(float DeltaTime) {
}

void UBtlGuiPersonaStatusComponent::StartPersonaSkillHelp() {
}

void UBtlGuiPersonaStatusComponent::StartPersonaCommentary() {
}

void UBtlGuiPersonaStatusComponent::SetEquipPersona() {
}

bool UBtlGuiPersonaStatusComponent::IsEndPersonaStatus() {
    return false;
}

int32 UBtlGuiPersonaStatusComponent::GetPersonaStockCount(ABtlActor* Actor) {
    return 0;
}

ABtlActor* UBtlGuiPersonaStatusComponent::GetDispActor(UBtlCoreComponent* pCore) {
    return NULL;
}

void UBtlGuiPersonaStatusComponent::DeleteInstance() {
}

void UBtlGuiPersonaStatusComponent::CreatePersonaStatusTargetSelect(ABtlActor* Actor, UBtlCoreComponent* pCore, TArray<ABtlActor*> PlayerList) {
}

void UBtlGuiPersonaStatusComponent::CreatePersonaStatus(ABtlActor* Actor, UBtlCoreComponent* pCore, int32 CurrentNum, bool AlwaysChange) {
}

void UBtlGuiPersonaStatusComponent::CreateInstance() {
}

void UBtlGuiPersonaStatusComponent::ClosePersonaStatus(UBtlCoreComponent* pCore) {
}

bool UBtlGuiPersonaStatusComponent::CheckPersonaSkillHelp() {
    return false;
}

bool UBtlGuiPersonaStatusComponent::CheckPersonaCommentary() {
    return false;
}

bool UBtlGuiPersonaStatusComponent::CheckPersonaChange() {
    return false;
}

void UBtlGuiPersonaStatusComponent::ChangePersonaStatusRightActor() {
}

bool UBtlGuiPersonaStatusComponent::ChangePersonaStatusRight() {
    return false;
}

void UBtlGuiPersonaStatusComponent::ChangePersonaStatusLeftActor() {
}

bool UBtlGuiPersonaStatusComponent::ChangePersonaStatusLeft() {
    return false;
}

UBtlGuiPersonaStatusComponent::UBtlGuiPersonaStatusComponent() {
    this->pActor = NULL;
    this->pFirstCharacter = NULL;
}

