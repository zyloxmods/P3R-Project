#include "BtlGuiResources.h"

void UBtlGuiResources::SetResourcesActor(ABtlGuiResourcesActor* Actor) {
}

void UBtlGuiResources::SetAsyncLoadCompleted() {
}

void UBtlGuiResources::RequestAddResources(const FString& ResourcesPath) {
}

void UBtlGuiResources::LoadEndAction() {
}

void UBtlGuiResources::InitializeLayoutDebugMenu(ABtlGuiStateManager* StateManager) {
}

void UBtlGuiResources::GetTouchCollData(EBtlTouchCollisionLayout LayoutId, float& PosX, float& PosY, float& Angle, float& Width, float& Height) {
}

FVector2D UBtlGuiResources::GetTopAdjustedPosition(EBtlTopLayout LayoutId) {
    return FVector2D{};
}

FVector2D UBtlGuiResources::GetTheurgiaTextTextCollition(EUITheurgiaTextLayout LayoutId) {
    return FVector2D{};
}

int32 UBtlGuiResources::GetTheurgiaTextRow(EUITheurgiaTextRowLayout LayoutId) {
    return 0;
}

FVector2D UBtlGuiResources::GetTheurgiaTextPos(EUITheurgiaTextPosLayout LayoutId) {
    return FVector2D{};
}

FVector2D UBtlGuiResources::GetTheurgiaAdjustedPosition(EBtlTheurgiaLayout LayoutId) {
    return FVector2D{};
}

FVector2D UBtlGuiResources::GetTargetInfoTextCollision(EBtlTargetInfoTextLayout LayoutId) {
    return FVector2D{};
}

FVector2D UBtlGuiResources::GetTacticsTextCollision(EBtlTacticsListTextLayout LayoutId) {
    return FVector2D{};
}

FVector2D UBtlGuiResources::GetTacticsCheckAdjustedPosition(EBtlTacticsCheckLayout LayoutId) {
    return FVector2D{};
}

FVector2D UBtlGuiResources::GetTacticsAdjustedPosition(EBtlTacticsLayout LayoutId) {
    return FVector2D{};
}

FVector2D UBtlGuiResources::GetRushAdjustedPosition(EBtlRushLayout LayoutId) {
    return FVector2D{};
}

void UBtlGuiResources::GetResourcesPure(FName ResourcesName, UClass* ResourcesClass, UObject*& OutResources) {
}

void UBtlGuiResources::GetResources(FName ResourcesName, UClass* ResourcesClass, UObject*& OutResources) {
}

FVector2D UBtlGuiResources::GetPromiseAdjustedPosition(EBtlPromiseLayout LayoutId) {
    return FVector2D{};
}

FVector2D UBtlGuiResources::GetOthersAdjustedPosition(EBtlOthersLayout LayoutId) {
    return FVector2D{};
}

USprAsset* UBtlGuiResources::GetKeyHelpSpr() {
    return NULL;
}

FVector UBtlGuiResources::GetItemSkillListTextCollision(EBtlItemSkillListTextLayout LayoutId) {
    return FVector{};
}

USprAsset* UBtlGuiResources::GetItemIconSpr() {
    return NULL;
}

FVector2D UBtlGuiResources::GetGuardAdjustedPosition(EBtlGuardLayout LayoutId) {
    return FVector2D{};
}

FVector2D UBtlGuiResources::GetDamageIconAdjustedPosition(EBtlDamageIconLayout LayoutId) {
    return FVector2D{};
}

USprAsset* UBtlGuiResources::GetCampSpr() {
    return NULL;
}

UTextureRenderTarget2D* UBtlGuiResources::GetAppRenderTarget(int32 Type) {
    return NULL;
}

FVector2D UBtlGuiResources::GetAnalyzeTextTextCollition(EBtlAnalyzeTextLayout LayoutId) {
    return FVector2D{};
}

FVector2D UBtlGuiResources::GetAnalyzeAdjustedPosition(EBtlAnalyzeLayout LayoutId) {
    return FVector2D{};
}

void UBtlGuiResources::GetAddResourcesPure(UClass* ResourcesClass, UObject*& OutResources) {
}

void UBtlGuiResources::GetAddResources(UClass* ResourcesClass, UObject*& OutResources) {
}

bool UBtlGuiResources::CheckBtlResourcesCompleted() {
    return false;
}

void UBtlGuiResources::BtlGuiResourcesDestroy() {
}

ABtlGuiResourcesBase* UBtlGuiResources::BtlGuiResourcesCreate() {
    return NULL;
}

UBtlGuiResources::UBtlGuiResources() {
}

