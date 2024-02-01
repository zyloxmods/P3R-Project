#include "MailDraw.h"

bool AMailDraw::TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame) {
    return false;
}







void AMailDraw::SetTouchCollision(int32 Index, float X, float Y, float Width, float Height, EUI_DRAW_POINT DrawPoint, bool onList) {
}

void AMailDraw::SetScrollBarSliderCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 ScrollPos, int32 DrawListNum, int32 MaxListNum, EUI_DRAW_POINT DrawPoint) {
}

void AMailDraw::SetScrollBarBaseCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 ScrollPos, int32 DrawListNum, int32 MaxListNum, EUI_DRAW_POINT DrawPoint) {
}

void AMailDraw::SetMailListIsNew(int32 InIndex, bool InIsNew) {
}

void AMailDraw::OneTimeLockInput() {
}

bool AMailDraw::IsIsDeterminedByCross() {
    return false;
}





int32 AMailDraw::GetMailSenderID() {
    return 0;
}

int32 AMailDraw::GetListSenderID(int32 InIndex) {
    return 0;
}

bool AMailDraw::GetListIsRead(int32 InIndex) {
    return false;
}

bool AMailDraw::GetListIsNew(int32 InIndex) {
    return false;
}

FVector2D AMailDraw::GetAdjustedLayoutPosition(EMailLayout InLayoutId, FVector2D InDefaultPos) {
    return FVector2D{};
}

void AMailDraw::DrawSprForUIResources(FVector2D InPos, FColor InColor, int32 SprID, FVector2D Scale, float Angle, EUICommonResource ResourceType, EUI_DRAW_POINT DrawPoint) {
}

void AMailDraw::DrawMailTitleText(FVector2D InPos, FColor InColor, float InScale) {
}

void AMailDraw::DrawMailSenderText(FVector2D InPos, FColor InColor, float InScale) {
}

void AMailDraw::DrawMailMainText(FVector2D InPos, FColor InColor, float InScale) {
}

void AMailDraw::DrawListMailTitleText(int32 InIndex, FVector2D InPos, FColor InColor, float InScale) {
}

void AMailDraw::DrawListMailSenderText(int32 InIndex, FVector2D InPos, FColor InColor, float InScale) {
}

float AMailDraw::ConvFrameToTime(int32 InFrame) {
    return 0.0f;
}

AMailDraw::AMailDraw() {
    this->bIsDirectOpen = false;
    this->bIsFlipToMainAnim = false;
    this->bIsFlipToListAnim = false;
    this->bIsStartInAnim = false;
    this->bIsFinishInAnim = false;
    this->bIsStartListAnim = false;
    this->bIsFinishListAnim = false;
    this->bIsStartMailAnim = false;
    this->bIsFinishMailAnim = false;
    this->bIsStartOutAnim = false;
    this->bIsFinishOutAnim = false;
    this->bIsShowMsg = false;
    this->bIsCloseMsg = false;
    this->bIsFinishShowMsgAnim = false;
    this->bIsFinishCloseMsgAnim = false;
    this->bHaveScript = false;
    this->SelectedIndex = 0;
    this->DrawIndex = 0;
    this->ScrollIndex = 0;
    this->MailScrollLine = 0;
    this->MailRowCount = 0;
    this->MailRowMax = 0;
    this->MailScrollMax = 0;
    this->MailMainBustupTexture = NULL;
    this->Loader = NULL;
    this->LayoutData = NULL;
    this->LayoutDataTable = NULL;
    this->textData = NULL;
    this->TextDataTable = NULL;
}

