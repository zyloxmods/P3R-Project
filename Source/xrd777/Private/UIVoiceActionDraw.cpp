#include "UIVoiceActionDraw.h"

bool AUIVoiceActionDraw::TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame) {
    return false;
}










void AUIVoiceActionDraw::OneTimeLockInput() {
}

bool AUIVoiceActionDraw::KeyHelpOut() {
    return false;
}

bool AUIVoiceActionDraw::KeyHelpIn() {
    return false;
}

void AUIVoiceActionDraw::InitSetDayTime() {
}







void AUIVoiceActionDraw::DrawStickyNoteAverage(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawNetworkIconSecond(FVector2D InPos, FColor InColor, float Angle, float Scale) {
}

void AUIVoiceActionDraw::DrawNetworkIcon(FVector2D InPos, FColor InColor, float Angle, float IconAngle) {
}

void AUIVoiceActionDraw::DrawMonth(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawDungeonActionStickyNote(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawDungeonActionPercent(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawDayOfWeek(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawDay(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawDailyActionStickyNote(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawDailyActionPercent(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawCommunityActionStickyNote(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawCommunityActionPercent(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawBlueBoard(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawBlackBoard(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawBackBoard(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceActionDraw::DrawActionBoard(FVector2D InPos, FColor InColor, float Angle) {
}

float AUIVoiceActionDraw::ConvFrameToTime(int32 InFrame) {
    return 0.0f;
}

AUIVoiceActionDraw::AUIVoiceActionDraw() {
    this->bIsStartInAnim = false;
    this->bIsFinishInAnim = false;
    this->bIsStartOutAnim = false;
    this->bIsFinishOutAnim = false;
    this->bIsKeyOutAnim = false;
    this->bReturnSceneOptionAnim = false;
    this->bIsStartInNetworkIconAnim = false;
    this->bIsFinishInNetworkIconAnim = false;
    this->bIsStartOutNetworkIconAnim = false;
    this->bIsFinishOutNetworkIconAnim = false;
    this->bIsStartInBlackBoardAnim = false;
    this->bIsFinishInBlackBoardAnim = false;
    this->bIsStartOutBlackBoardAnim = false;
    this->bIsFinishOutBlackBoardAnim = false;
    this->IsStartGetData = false;
    this->IsGetData = false;
    this->SprData = NULL;
    this->PlgData = NULL;
    this->OffStartFrame = 0;
    this->IsDisp = false;
}

