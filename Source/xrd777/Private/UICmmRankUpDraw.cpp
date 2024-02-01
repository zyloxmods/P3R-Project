#include "UICmmRankUpDraw.h"

void AUICmmRankUpDraw::Update(const float inDeltaTime) {
}

void AUICmmRankUpDraw::UICmmReverseBG(float X, float Y) {
}

void AUICmmRankUpDraw::UICmmDrawRankStar(float BasePosX, float BasePosY) {
}

void AUICmmRankUpDraw::UICmmDrawOkKey(float X, float Y) {
}

void AUICmmRankUpDraw::UICmmDrawLetter(float X, float Y) {
}

void AUICmmRankUpDraw::UICmmDrawGradationBG(FVector2D vLeftPos, FVector2D vRightPos, FVector2D hLeftPos, FVector2D hRightPos) {
}

void AUICmmRankUpDraw::UICmmDrawEndDraw(float X, float Y) {
}

void AUICmmRankUpDraw::UICmmDrawCard(float X, float Y) {
}

void AUICmmRankUpDraw::StartStarWaitAnime() {
}

void AUICmmRankUpDraw::StartStarMainInAnime() {
}

void AUICmmRankUpDraw::StartStarFrameAnime() {
}

void AUICmmRankUpDraw::StartShowReverseStar() {
}

bool AUICmmRankUpDraw::isEndAnimStart() {
    return false;
}

AUICmmRankUpDraw::AUICmmRankUpDraw() {
    this->pSprAsset = NULL;
    this->pPlgAsset = NULL;
    this->CaptureTexture = NULL;
    this->AnimManager = NULL;
    this->pSprKeyHelp = NULL;
    this->pSprKeyHelpButton = NULL;
    this->pManager = NULL;
    this->OkNextLayoutDataTable = NULL;
    this->OkNextMaskLayoutDataTable = NULL;
    this->CmmRankUpLayoutDataTable = NULL;
}

