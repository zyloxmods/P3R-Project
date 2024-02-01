#include "BtlGuiDrawComponent.h"

UPlgAsset* UBtlGuiDrawComponent::TranslateObjectToPlgAsset(UObject* Obj) {
    return NULL;
}

void UBtlGuiDrawComponent::TranslateObjectToAsset(UObject* Obj, UClass* TranslateClass, UObject*& OutAsset) {
}

void UBtlGuiDrawComponent::SetVisible(bool IsVisible) {
}

void UBtlGuiDrawComponent::SetItemVisible(int32 idx, bool IsVisible) {
}

void UBtlGuiDrawComponent::SetComponentBoolOff(bool isOff) {
}

void UBtlGuiDrawComponent::SetCanvas(EBtlGuiCanvas Canvas) {
}

void UBtlGuiDrawComponent::SetAryVisible(bool IsVisible) {
}

bool UBtlGuiDrawComponent::IsWindowsPlatform() {
    return false;
}

bool UBtlGuiDrawComponent::IsNotUsingPS4PS5GuardYesNoKey(UBtlGuiDrawObjectSprite* Item) {
    return false;
}

bool UBtlGuiDrawComponent::GetVisible() {
    return false;
}

FVector2D UBtlGuiDrawComponent::GetViewportSize() {
    return FVector2D{};
}

UTextureRenderTarget2D* UBtlGuiDrawComponent::GetRenderTarget(EBtlGuiCanvas Canvas) {
    return NULL;
}

void UBtlGuiDrawComponent::GetGroupDrawItem(int32 grpNo, TArray<int32>& idAry, TArray<UBtlGuiDrawObjectCore*>& objAry, bool Reverse) {
}

void UBtlGuiDrawComponent::GetDrawItem(int32 ID, UBtlGuiDrawObjectCore*& Obj) {
}

void UBtlGuiDrawComponent::GetAllDrawItem(TArray<int32>& idAry, TArray<UBtlGuiDrawObjectCore*>& objAry) {
}

UTexture* UBtlGuiDrawComponent::FrameBufferCapture(bool is2DCapture) {
    return NULL;
}

void UBtlGuiDrawComponent::DrawAtCanvas(EBtlGuiCanvas useCanvas) {
}

void UBtlGuiDrawComponent::Draw() {
}

void UBtlGuiDrawComponent::CreateDrawText(int32 grpNo, FBtlGuiDrawText Item, int32& outID, UBtlGuiDrawObjectText*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawSprite(int32 grpNo, FBtlGuiDrawSprite Item, int32& outID, UBtlGuiDrawObjectSprite*& outItem, bool onChangeByPlatform) {
}

void UBtlGuiDrawComponent::CreateDrawSilhouette(int32 grpNo, FBtlGuiDrawSilhouette Item, int32& outID, UBtlGuiDrawObjectSilhouette*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawRoundRect(int32 grpNo, FBtlGuiDrawRoundRect Item, int32& outID, UBtlGuiDrawObjectRoundRect*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawRect(int32 grpNo, FBtlGuiDrawRect Item, int32& outID, UBtlGuiDrawObjectRect*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawPrimitive(int32 grpNo, FBtlGuiDrawPrimitive Item, int32& outID, UBtlGuiDrawObjectPrimitive*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawPlg(int32 grpNo, FBtlGuiDrawPlg Item, int32& outID, UBtlGuiDrawObjectPlg*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawPanel(int32 grpNo, FBtlGuiDrawPanel Item, int32& outID, UBtlGuiDrawObjectPanel*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawMsg(int32 grpNo, FBtlGuiDrawMsg Item, int32& outID, UBtlGuiDrawObjectMsg*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawMaterial(int32 grpNo, FBtlGuiDrawMaterial Item, int32& outID, UBtlGuiDrawObjectMaterial*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawLineFrame(int32 grpNo, FBtlGuiDrawLineFrame Item, int32& outID, UBtlGuiDrawObjectLineFrame*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawImageByStruct(int32 grpNo, FBtlGuiDrawImage Item, int32& outID, UBtlGuiDrawObjectImage*& outItem) {
}

void UBtlGuiDrawComponent::CreateDrawImage(int32 grpNo, UTexture* Texture, FVector2D Pos, int32& outID, UBtlGuiDrawObjectImage*& outItem) {
}

void UBtlGuiDrawComponent::ClearScreen(int32 grpNo, int32& outID, UBtlGuiDrawObjectClearScreen*& outItem, FColor Color, EBtlGuiOT OT) {
}

void UBtlGuiDrawComponent::ClearDrawItem() {
}

void UBtlGuiDrawComponent::ClearCanvas(EBtlGuiCanvas Canvas, float Alpha, FBtlBlendState Bs) {
}

bool UBtlGuiDrawComponent::BtlGuiWorldToScreen2(FVector WorldPos, APlayerCameraManager* CameraManager, FVector2D& outPos, float& fZ, ACameraActor* CameraActor) {
    return false;
}

FVector2D UBtlGuiDrawComponent::BtlGuiWorldToScreen(FVector WorldPos, APlayerController* PlayerController) {
    return FVector2D{};
}

void UBtlGuiDrawComponent::BtlGuiSetDrawEnable(bool isEnable) {
}

void UBtlGuiDrawComponent::BtlGuiCheckDrawEnable(bool& Enable) {
}

UBtlGuiDrawComponent::UBtlGuiDrawComponent() {
    this->canvasType = EBtlGuiCanvas::BTL_CANVAS_NULL;
}

