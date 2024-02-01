#include "UIConfigurationDraw.h"

void AUIConfigurationDraw::UpdateInWipe(float inDeltaTime) {
}

void AUIConfigurationDraw::UpdateCloseWipe(float inDeltaTime) {
}

void AUIConfigurationDraw::UpdateAnim(float DeltaTime) {
}

bool AUIConfigurationDraw::TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame) {
    return false;
}










void AUIConfigurationDraw::StartInWipe(bool IsTitle) {
}

void AUIConfigurationDraw::StartCloseWipe() {
}






void AUIConfigurationDraw::SetValueGaugeTouchCollision(const FDrawConfigParam& drawParam, float GaugeX, float GaugeY, float GaugeWidth, float GaugeHeight, float SliderX, float SliderY) {
}

void AUIConfigurationDraw::SetTouchCollision(int32 Index, float X, float Y, float Width, float Height, int32 addLayer, EUI_DRAW_POINT DrawPoint) {
}

void AUIConfigurationDraw::SetSliderPos(int32 InMenuID, FVector2D InSliderPos) {
}

void AUIConfigurationDraw::SetScrollTouchCollision(float X, float Y, float Width, float Height, int32 addLayer, EUI_DRAW_POINT DrawPoint) {
}

void AUIConfigurationDraw::SetScrollSize(FVector2D InSize) {
}

void AUIConfigurationDraw::SetScrollPos(FVector2D InPos, float Height, float ScrollRange, int32 DrawListNum, int32 MaxListNum, int32 ScrollPosY) {
}

void AUIConfigurationDraw::SetScrollBarTouchCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 DrawListNum, int32 MaxListNum, int32 ScrollPosY, int32 addLayer, EUI_DRAW_POINT DrawPoint) {
}






bool AUIConfigurationDraw::IsWindowShow() {
    return false;
}

bool AUIConfigurationDraw::IsTitleOpend() {
    return false;
}

bool AUIConfigurationDraw::IsScrollDrawBgmSelectText() {
    return false;
}

bool AUIConfigurationDraw::IsKeyConfig() {
    return false;
}

bool AUIConfigurationDraw::IsConfigTypeMode() {
    return false;
}

bool AUIConfigurationDraw::IsBGMMode() {
    return false;
}

bool AUIConfigurationDraw::IsBaseDiffLuna() {
    return false;
}

FString AUIConfigurationDraw::GetSoundOutputText(int32 InSelect) {
    return TEXT("");
}

FString AUIConfigurationDraw::GetSelLangText(int32 InSelect) {
    return TEXT("");
}

int32 AUIConfigurationDraw::GetPlayingIndex() {
    return 0;
}

FString AUIConfigurationDraw::GetOnText() {
    return TEXT("");
}

FString AUIConfigurationDraw::GetOffText() {
    return TEXT("");
}

int32 AUIConfigurationDraw::GetListTopIndex() {
    return 0;
}

int32 AUIConfigurationDraw::GetListNum() {
    return 0;
}

bool AUIConfigurationDraw::GetIsFisrt() {
    return false;
}

FDrawConfigParam AUIConfigurationDraw::GetIndexedDrawConfigParam(int32 InIndex) {
    return FDrawConfigParam{};
}

FColor AUIConfigurationDraw::GetGradation2TopColour() {
    return FColor{};
}

FColor AUIConfigurationDraw::GetGradation2BottomColour() {
    return FColor{};
}

FColor AUIConfigurationDraw::GetGradation1TopColour() {
    return FColor{};
}

FColor AUIConfigurationDraw::GetGradation1BottomColour() {
    return FColor{};
}

FDrawConfigParam AUIConfigurationDraw::GetDrawConfigParam(int32 InMenuID) {
    return FDrawConfigParam{};
}

FString AUIConfigurationDraw::GetDifficultyText(int32 InSelect) {
    return TEXT("");
}

int32 AUIConfigurationDraw::GetCursorIndex() {
    return 0;
}

int32 AUIConfigurationDraw::GetCurrentIndex() {
    return 0;
}

FString AUIConfigurationDraw::GetConfigTypeText(int32 InSelect) {
    return TEXT("");
}

FString AUIConfigurationDraw::GetButtonLayoutText(int32 InSelect) {
    return TEXT("");
}

FColor AUIConfigurationDraw::GetBlueBoardColor() {
    return FColor{};
}

FString AUIConfigurationDraw::GetBGMText(int32 InSelect) {
    return TEXT("");
}

int32 AUIConfigurationDraw::GetBgmSetID() {
    return 0;
}

int32 AUIConfigurationDraw::GetBgmListTopIndex() {
    return 0;
}

int32 AUIConfigurationDraw::GetBgmCursorIndex() {
    return 0;
}

bool AUIConfigurationDraw::GetAdjustedHelpRootPosition(bool InIsBGMMode, FVector2D& OutPosition) {
    return false;
}

bool AUIConfigurationDraw::GetAdjustedHelpBarOffset(bool InIsBGMMode, FVector2D& OutPosition) {
    return false;
}

void AUIConfigurationDraw::GetAdjustedConfigTextCol(ECmpLayoutConfigText InType, FVector2D& OutSize) {
}

void AUIConfigurationDraw::GetAdjustedConfigPos(ECmpLayoutConfig InType, FVector2D Default, FVector2D& OutSize) {
}


void AUIConfigurationDraw::DrawUim(UObject* inUimAsset, float InFrame, bool& bIsMaxFrame, const UTexture* inTexture) {
}

void AUIConfigurationDraw::DrawNami() {
}

void AUIConfigurationDraw::DrawKeyConfigSwitcher(float X, float Y) {
}

void AUIConfigurationDraw::DrawKeyConfigButtonSpr(float X, float Y, const FDrawConfigParam& DrawConfigParam, const FColor& RGBA, const USprAsset* SprHandle) {
}

void AUIConfigurationDraw::DrawInWipe() {
}

void AUIConfigurationDraw::DrawHeroTexture(UTexture* inTexture) {
}

void AUIConfigurationDraw::DrawHeroSilhouette(FVector2D Offset) {
}

void AUIConfigurationDraw::DrawGlowCore(FVector2D Offset, FColor Color, float Scale, FVector2D PlusOffset, const USprAsset* SprHandle) {
}

void AUIConfigurationDraw::DrawCommonBg2(bool IsTitle) {
}

void AUIConfigurationDraw::DrawCommonBg1() {
}

void AUIConfigurationDraw::DrawCloseWipe() {
}

void AUIConfigurationDraw::DrawBgmSelectText(float baseX, float baseY, float textX, float textY, uint8 textColorR, uint8 textColorG, uint8 textColorB, uint8 textColorA, float SizeX, float SizeY, const FDrawConfigParam& DrawConfigParam, FDrawBGMParam& DrawBGMParam, const USprAsset* SprHandle) {
}

void AUIConfigurationDraw::DrawAudioDeviceChange(float baseX, float baseY, float textX, float textY, uint8 textColorR, uint8 textColorG, uint8 textColorB, uint8 textColorA, float SizeX, float SizeY, const FDrawConfigParam& DrawConfigParam, const USprAsset* SprHandle) {
}

float AUIConfigurationDraw::ConvFrameToTime(int32 InFrame) {
    return 0.0f;
}

void AUIConfigurationDraw::ConfigInAnimFinished() {
}

void AUIConfigurationDraw::Closed() {
}

void AUIConfigurationDraw::BPUICommand_DrawSpr_Ex(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const int32 SprNo, const float ScaleX, const float ScaleY, const float PipodX, const float PipodY, const float Angle, const USprAsset* SprHandle) {
}

void AUIConfigurationDraw::BgmSetAnimFinished() {
}

float AUIConfigurationDraw::BGMScaleCalculation(float InTimer, float InSrcValue, float InDstValue, int32 InWaitFrame, int32 InMoveFrame, appCalculationType InAnimType) {
    return 0.0f;
}

FVector2D AUIConfigurationDraw::BGMMoveCalculation(float InTimer, FVector2D InSrcValue, FVector2D InDstValue, int32 InWaitFrame, int32 InMoveFrame, appCalculationType InAnimType) {
    return FVector2D{};
}

void AUIConfigurationDraw::BGMInAnimFinished() {
}

float AUIConfigurationDraw::BGMAlphaCalculation(float InTimer, float InSrcValue, float InDstValue, int32 InWaitFrame, int32 InNextWaitFrame, int32 InMoveFrame, int32 InNextMoveFrame, appCalculationType InAnimType) {
    return 0.0f;
}

AUIConfigurationDraw::AUIConfigurationDraw() {
    this->pKeySpr = NULL;
    this->LayoutDataTable = NULL;
    this->HelpLayoutDataTable = NULL;
    this->ConfigTextLayoutDataTable = NULL;
}

