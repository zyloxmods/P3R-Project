#include "UIVoiceAnswerDraw.h"

bool AUIVoiceAnswerDraw::TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame) {
    return false;
}










void AUIVoiceAnswerDraw::OneTimeLockInput() {
}

bool AUIVoiceAnswerDraw::KeyHelpOut() {
    return false;
}

bool AUIVoiceAnswerDraw::KeyHelpIn() {
    return false;
}

bool AUIVoiceAnswerDraw::IsMaxAnswer() {
    return false;
}

void AUIVoiceAnswerDraw::InitSetDayTime() {
}







void AUIVoiceAnswerDraw::DrawTextureD(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawTextureC(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawTextureB(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawTextureA(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawStickerD(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawStickerC(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawStickerB(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawStickerA(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawRightBracketsD(FVector2D InPos, FColor InColor, float Width, float Height, float Angle) {
}

void AUIVoiceAnswerDraw::DrawRightBracketsC(FVector2D InPos, FColor InColor, float Width, float Height, float Angle) {
}

void AUIVoiceAnswerDraw::DrawRightBracketsB(FVector2D InPos, FColor InColor, float Width, float Height, float Angle) {
}

void AUIVoiceAnswerDraw::DrawRightBracketsA(FVector2D InPos, FColor InColor, float Width, float Height, float Angle) {
}

void AUIVoiceAnswerDraw::DrawNetworkIconSecond(FVector2D InPos, FColor InColor, float Angle, float Scale) {
}

void AUIVoiceAnswerDraw::DrawNetworkIcon(FVector2D InPos, FColor InColor, float Angle, float IconAngle) {
}

void AUIVoiceAnswerDraw::DrawMonth(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawLeftBracketsD(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawLeftBracketsC(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawLeftBracketsB(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawLeftBracketsA(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawDayOfWeek(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawDay(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawBlueBoard(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawBlackBoard(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawBackBoard(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawAnswerTextD(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawAnswerTextC(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawAnswerTextB(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawAnswerTextA(FVector2D InPos, FColor InColor, float Angle) {
}

void AUIVoiceAnswerDraw::DrawAnswerBoard(FVector2D InPos, FColor InColor, float Angle) {
}

float AUIVoiceAnswerDraw::ConvFrameToTime(int32 InFrame) {
    return 0.0f;
}

AUIVoiceAnswerDraw::AUIVoiceAnswerDraw() {
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
    this->IsDisp = false;
    this->SprData = NULL;
    this->PlgData = NULL;
    this->OffStartFrame = 0;
}

