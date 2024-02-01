#include "UIDrawBaseActor.h"

bool AUIDrawBaseActor::Sync() {
    return false;
}

void AUIDrawBaseActor::LoadStart() {
}

UObject* AUIDrawBaseActor::GetResourceData(const int32 Index) {
    return NULL;
}

void AUIDrawBaseActor::BPUIDebugCommand_DrawTriangle(const float VX0, const float VY0, const float VX1, const float VY1, const float VX2, const float VY2, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing) {
}

void AUIDrawBaseActor::BPUIDebugCommand_DrawTexture(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float U0, const float V0, const float U1, const float v1, const UTexture* TextureHandle) {
}

void AUIDrawBaseActor::BPUIDebugCommand_DrawSpr(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const int32 SprNo, const float ScaleX, const float ScaleY, const float Angle, const USprAsset* SprHandle) {
}

void AUIDrawBaseActor::BPUIDebugCommand_DrawRectV4(const float X, const float Y, const float Z, const float VX0, const float VY0, const float VX1, const float VY1, const float VX2, const float VY2, const float VX3, const float VY3, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing) {
}

void AUIDrawBaseActor::BPUIDebugCommand_DrawRect(const float X, const float Y, const float Z, const float Width, const float Height, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing) {
}

void AUIDrawBaseActor::BPUIDebugCommand_DrawMaterial(const float X, const float Y, const float Z, const float Width, const float Height, const float Angle, const UMaterialInstance* pMaterialInstance) {
}

void AUIDrawBaseActor::BPUICommand_SetRenderTarget(const int32 CanvasIndex) {
}

void AUIDrawBaseActor::BPUICommand_SetPresetBlendState(const EUIOTPRESET_BLEND_TYPE BlendType) {
}

void AUIDrawBaseActor::BPUICommand_SetBlendState(const EUIBlendOperation OpColor, const EUIBlendFactor SrcColor, const EUIBlendFactor DstColor, const EUIBlendOperation OpAlpha, const EUIBlendFactor SrcAlpha, const EUIBlendFactor DstAlpha) {
}

void AUIDrawBaseActor::BPUICommand_ScalingItalicFontDraw(const float X, const float Y, const FString& String, const FColor Color, const float SizeX, const float SizeY, const float Scale, const float Angle, const bool ScalingOnlyX, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style) {
}

void AUIDrawBaseActor::BPUICommand_ScalingFontDraw(const float X, const float Y, const float Z, const FString& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float SizeX, const float SizeY, const float Scale, const float Angle, const bool ScalingOnlyX, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style, const bool IsScaling) {
}

void AUIDrawBaseActor::BPUICommand_ItalicFontDraw(const float X, const float Y, const FString& String, const FColor Color, const float Scale, const float Angle, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style) {
}

UTextureRenderTarget2D* AUIDrawBaseActor::BPUICommand_GetRenderTarget(const int32 CanvasIndex) {
    return NULL;
}

void AUIDrawBaseActor::BPUICommand_FontDrawFromFName(const float X, const float Y, const float Z, const FName& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Scale, const float Angle, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style) {
}

void AUIDrawBaseActor::BPUICommand_FontDrawExFromFName(const float X, const float Y, const float Z, const FName& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Scale, const float Angle, const float AnglePointX, const float AnglePointY, const EUIFontStyle Style) {
}

void AUIDrawBaseActor::BPUICommand_FontDrawEx(const float X, const float Y, const float Z, const FString& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Scale, const float Angle, const float AnglePointX, const float AnglePointY, const EUIFontStyle Style) {
}

void AUIDrawBaseActor::BPUICommand_FontDraw(const float X, const float Y, const float Z, const FString& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Scale, const float Angle, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style) {
}

void AUIDrawBaseActor::BPUICommand_DrawVerticalGradationRect(const float X, const float Y, const float Width, const float Height, const FColor TopColor, const FColor BottomColor) {
}

void AUIDrawBaseActor::BPUICommand_DrawTriangle(const float X, const float Y, const float Z, const float VX0, const float VY0, const float VX1, const float VY1, const float VX2, const float VY2, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing) {
}

void AUIDrawBaseActor::BPUICommand_DrawTexture(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float U0, const float V0, const float U1, const float v1, const UTexture* TextureHandle, const EUI_DRAW_POINT DrawPoint) {
}

void AUIDrawBaseActor::BPUICommand_DrawSpr(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const int32 SprNo, const float ScaleX, const float ScaleY, const float Angle, const USprAsset* SprHandle, const EUI_DRAW_POINT DrawPoint) {
}

void AUIDrawBaseActor::BPUICommand_DrawSircle(const float X, const float Y, const float Z, const float Radius, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Antialiasing) {
}

void AUIDrawBaseActor::BPUICommand_DrawScrollbar(const float X, const float Y, const float Z, const float Width, const float Height, const float ScrollRange, const int32 ScrollPos, const int32 DrawListNum, const int32 MaxListNum, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing, const EUI_DRAW_POINT DrawPoint) {
}

void AUIDrawBaseActor::BPUICommand_DrawRoundRect(const float X, const float Y, const float Z, const float Width, const float Height, const int32 Round, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing, const EUI_DRAW_POINT DrawPoint) {
}

void AUIDrawBaseActor::BPUICommand_DrawRectV4(const float X, const float Y, const float Z, const float VX0, const float VY0, const float VX1, const float VY1, const float VX2, const float VY2, const float VX3, const float VY3, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing, const EUI_DRAW_POINT DrawPoint) {
}

void AUIDrawBaseActor::BPUICommand_DrawRect(const float X, const float Y, const float Z, const float Width, const float Height, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing, const EUI_DRAW_POINT DrawPoint) {
}

void AUIDrawBaseActor::BPUICommand_DrawPlg(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const int32 PlgID, const float ScaleX, const float ScaleY, const float Angle, const UPlgAsset* PlgHandle) {
}

void AUIDrawBaseActor::BPUICommand_DrawMaterial(const float X, const float Y, const float Z, const float Width, const float Height, const float Angle, const UObject* pMaterial) {
}

USprAsset* AUIDrawBaseActor::BPUICommand_CastSprAsset(UObject* Asset) {
    return NULL;
}

UPlgAsset* AUIDrawBaseActor::BPUICommand_CastPlgAsset(UObject* Asset) {
    return NULL;
}

void AUIDrawBaseActor::BPUICommand_AtlUIBlendState(const EUIBLEND_STATE_TYPE BlendType) {
}

void AUIDrawBaseActor::AddLoadAsset(const TSoftObjectPtr<UObject> SoftAsset) {
}

AUIDrawBaseActor::AUIDrawBaseActor() {
    this->pAssetLoader = NULL;
    this->ResourceDataAsset = NULL;
}

