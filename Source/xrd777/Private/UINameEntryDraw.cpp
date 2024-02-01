#include "UINameEntryDraw.h"

bool AUINameEntryDraw::TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame) {
    return false;
}





void AUINameEntryDraw::SetNameTouchCollision(FVector2D InName1Pos, FVector2D InName2Pos) {
}

void AUINameEntryDraw::SetDicitionTouchCollision(FVector2D InDicitionPos, FVector2D OptionScale, FVector2D DicitionScale, EUI_DRAW_POINT DrawPoint) {
}


void AUINameEntryDraw::PlaySENameEntry() {
}

void AUINameEntryDraw::OneTimeLockInput() {
}

bool AUINameEntryDraw::KeyHelpOut() {
    return false;
}

bool AUINameEntryDraw::KeyHelpIn() {
    return false;
}

bool AUINameEntryDraw::IsName2TypingOnKeyboard() {
    return false;
}

bool AUINameEntryDraw::IsName2Entered() {
    return false;
}

bool AUINameEntryDraw::IsName1TypingOnKeyboard() {
    return false;
}

bool AUINameEntryDraw::IsName1Entered() {
    return false;
}

bool AUINameEntryDraw::IsKeyHelpGray() {
    return false;
}

bool AUINameEntryDraw::IsIsDeterminedByCross() {
    return false;
}

bool AUINameEntryDraw::IsEnableOption() {
    return false;
}

bool AUINameEntryDraw::IsCursorPreName2Use() {
    return false;
}

bool AUINameEntryDraw::IsCursorPreName1Use() {
    return false;
}

bool AUINameEntryDraw::IsCursorName2Use() {
    return false;
}

bool AUINameEntryDraw::IsCursorName1Use() {
    return false;
}

bool AUINameEntryDraw::IsAllNameEntered() {
    return false;
}



FVector2D AUINameEntryDraw::GetAdjustedLayoutScale(EUINameEntryLayout InLayoutId, FVector2D InDefaultScale) {
    return FVector2D{};
}

FVector2D AUINameEntryDraw::GetAdjustedLayoutPosition(EUINameEntryLayout InLayoutId, FVector2D InDefaultPos) {
    return FVector2D{};
}

void AUINameEntryDraw::DrawTranslation(FVector2D InPos, FColor InColor) {
}

void AUINameEntryDraw::DrawOptionsBase(FVector2D InPos, FColor InColor, FVector2D Scale, float Angle, EUI_DRAW_POINT DrawPoint) {
}

void AUINameEntryDraw::DrawOptions(FVector2D InPos, FColor InColor, FVector2D Scale, float Angle, EUI_DRAW_POINT DrawPoint) {
}

void AUINameEntryDraw::DrawName2Text(FVector2D InPos, FColor InColor, FColor InColorDown, FColor InColorUp) {
}

void AUINameEntryDraw::DrawName1Text(FVector2D InPos, FColor InColor, FColor InColorDown, FColor InColorUp) {
}

void AUINameEntryDraw::DrawGradationScreen(FVector2D InPos, FColor InColor) {
}

void AUINameEntryDraw::DrawCursor1(FVector2D InPos, FColor InColor) {
}

void AUINameEntryDraw::DrawBlueLight(FVector2D InPos, FColor InColor) {
}

float AUINameEntryDraw::ConvFrameToTime(int32 InFrame) {
    return 0.0f;
}

AUINameEntryDraw::AUINameEntryDraw() {
    this->bIsStartInAnim = false;
    this->bIsFinishInAnim = false;
    this->bIsStartOutAnim = false;
    this->bIsFinishOutAnim = false;
    this->bIsKeyOutAnim = false;
    this->bReturnSceneOptionAnim = false;
    this->SprData = NULL;
    this->OffStartFrame = 0;
    this->InFirstStartFrame = 0;
    this->InSecondStartFrame = 0;
    this->InThirdStartFrame = 0;
    this->InFourthStartFrame = 0;
    this->InFirstEndFrame = 0;
    this->InSecondEndFrame = 0;
    this->InThirdEndFrame = 0;
    this->InFourthEndFrame = 0;
    this->OutFirstStartFrame = 0;
    this->OutSecondStartFrame = 0;
    this->OutFirstEndFrame = 0;
    this->OutSecondEndFrame = 0;
    this->pLayoutDataTable = NULL;
}

