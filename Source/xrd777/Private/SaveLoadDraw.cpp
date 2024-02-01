#include "SaveLoadDraw.h"

bool ASaveLoadDraw::TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame) {
    return false;
}





void ASaveLoadDraw::SetTouchCollision(int32 Index, bool isSelected, float X, float Y, float Width, float Height, EUI_DRAW_POINT DrawPoint) {
}

void ASaveLoadDraw::SetScrollBarSliderCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 ScrollPos, int32 DrawListNum, int32 MaxListNum, EUI_DRAW_POINT DrawPoint) {
}

void ASaveLoadDraw::SetScrollBarCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 ScrollPos, int32 DrawListNum, int32 MaxListNum, EUI_DRAW_POINT DrawPoint) {
}

void ASaveLoadDraw::SetScrollBarBaseCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 ScrollPos, int32 DrawListNum, int32 MaxListNum, EUI_DRAW_POINT DrawPoint) {
}

void ASaveLoadDraw::PLNameFontDraw(const float X, const float Y, const FString& String, const FColor Color, const float Scale, const float Angle, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style) {
}

void ASaveLoadDraw::PlayListInSE() {
}

void ASaveLoadDraw::LocationNameDraw(const float X, const float Y, const float Z, const FString& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Scale, const float Angle, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style) {
}

bool ASaveLoadDraw::IsMonthDayDisplayLanguages() {
    return false;
}

bool ASaveLoadDraw::IsDebugDrawClearData() {
    return false;
}

bool ASaveLoadDraw::IsDayZeroPaddingLanguages(int32 InMonth) {
    return false;
}

bool ASaveLoadDraw::IsCheckedNetworkSave() {
    return false;
}

int32 ASaveLoadDraw::GetSelDebugMonth(int32 InMonth) {
    return 0;
}

int32 ASaveLoadDraw::GetSelDebugDay(int32 InDay) {
    return 0;
}

int32 ASaveLoadDraw::GetDebugMonth(int32 InMonth) {
    return 0;
}

int32 ASaveLoadDraw::GetDebugDay(int32 InDay) {
    return 0;
}

void ASaveLoadDraw::DrawTextureEx(const float X, const float Y, const float Width, const float Height, const UTexture* TextureHandle, const EUI_DRAW_POINT DrawPoint) {
}

float ASaveLoadDraw::ConvFrameToTime(int32 InFrame) {
    return 0.0f;
}

void ASaveLoadDraw::CallOnFinishedInAnim() {
}

void ASaveLoadDraw::CallOnFinishedCloseAnim() {
}

FVector2D ASaveLoadDraw::AdjustedLayoutPos(ESaveLoadLayout InLayoutId, FVector2D InDefaultPos) {
    return FVector2D{};
}

FVector2D ASaveLoadDraw::AdjustedLayout2Pos(ESaveLoadLayout2 InLayoutId, FVector2D InDefaultPos) {
    return FVector2D{};
}

FVector2D ASaveLoadDraw::AdjustedDateLayoutPos(ESaveLoadDateLayout InLayoutId, FVector2D InDefaultPos) {
    return FVector2D{};
}

ASaveLoadDraw::ASaveLoadDraw() {
    this->BootMode = 0;
    this->bIsStartInAnim = false;
    this->bIsUseCapture = false;
    this->bIsOpenCamp = false;
    this->bIsUseScrollBar = false;
    this->bIsStartCloseAnim = false;
    this->CursorIndex = 0;
    this->ListTopIndex = 0;
    this->CurrentIndex = 0;
    this->OpenType = ESaveDrawOpenType::TYPE_FIELD;
    this->AllSlotNum = 15;
    this->CheckOverListIndex = 9;
}

