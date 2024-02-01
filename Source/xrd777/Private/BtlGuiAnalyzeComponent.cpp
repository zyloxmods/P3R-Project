#include "BtlGuiAnalyzeComponent.h"

void UBtlGuiAnalyzeComponent::UpdateAnalyze(ABtlActor* Actor) {
}

void UBtlGuiAnalyzeComponent::StartLoadResource() {
}

void UBtlGuiAnalyzeComponent::ShowMessage(int32 Index) {
}

void UBtlGuiAnalyzeComponent::ShowFukaPartyPanel() {
}

void UBtlGuiAnalyzeComponent::SetSelectIndex(int32 idx) {
}

TArray<ABtlActor*> UBtlGuiAnalyzeComponent::RemoveSameEnemyID(TArray<ABtlActor*> inList, ABtlActor* PriorityActor) {
    return TArray<ABtlActor*>();
}

void UBtlGuiAnalyzeComponent::PlaySupportInfo(UBtlCoreComponent* BtlCore, ABtlActor* Actor) {
}

void UBtlGuiAnalyzeComponent::PlayAnalyzeSupportInfo(UBtlCoreComponent* BtlCore, int32 PlayID) {
}

void UBtlGuiAnalyzeComponent::OpenSelectWindow() {
}

void UBtlGuiAnalyzeComponent::Init() {
}

void UBtlGuiAnalyzeComponent::HiddenFukaPartyPanel() {
}

EBtlAnalyzeSupportType UBtlGuiAnalyzeComponent::GetSupportTypeTargetEnemy(UBtlCoreComponent* BtlCore, ABtlActor* Actor) {
    return EBtlAnalyzeSupportType::BTL_ANALYZE_SUPPORT_QUESTION;
}

UBmdAsset* UBtlGuiAnalyzeComponent::GetHighAnalyzeBMD(UBtlCoreComponent* BtlCore) {
    return NULL;
}

bool UBtlGuiAnalyzeComponent::GetDebugEnableFlag(UBtlCoreComponent* BtlCore) {
    return false;
}

int32 UBtlGuiAnalyzeComponent::GetCostHighAnalyze() {
    return 0;
}

int32 UBtlGuiAnalyzeComponent::GetAnalyzeSupportInfo(UBtlCoreComponent* BtlCore, EBtlAnalyzeSupportType Type) {
    return 0;
}

void UBtlGuiAnalyzeComponent::CloseSelectWindow() {
}

void UBtlGuiAnalyzeComponent::CloseAnalyze() {
}

bool UBtlGuiAnalyzeComponent::CheckShowStatus(ABtlActor* Actor) {
    return false;
}

bool UBtlGuiAnalyzeComponent::CheckShowSkill(ABtlActor* Actor) {
    return false;
}

bool UBtlGuiAnalyzeComponent::CheckShowItem(ABtlActor* Actor) {
    return false;
}

bool UBtlGuiAnalyzeComponent::CheckShowFukaFukidashi(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlGuiAnalyzeComponent::CheckShowAttackAttr(ABtlActor* Actor) {
    return false;
}

bool UBtlGuiAnalyzeComponent::CheckShowArcana(ABtlActor* Actor) {
    return false;
}

bool UBtlGuiAnalyzeComponent::CheckPlayHighAnalzeSupport(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlGuiAnalyzeComponent::CheckHighAnalyzeEnableSP() {
    return false;
}

bool UBtlGuiAnalyzeComponent::CheckEndLoader() {
    return false;
}

bool UBtlGuiAnalyzeComponent::CheckAttrFullOpen(ABtlActor* Actor) {
    return false;
}

UBtlGuiAnalyzeComponent::UBtlGuiAnalyzeComponent() {
    this->BmdAsset = NULL;
    this->Loader = NULL;
}

