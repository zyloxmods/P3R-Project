#include "DifficultySelectionActor.h"

bool ADifficultySelectionActor::LoadCheck() {
    return false;
}

bool ADifficultySelectionActor::HasMsgInstance() {
    return false;
}

FVector2D ADifficultySelectionActor::GetScreenSize() {
    return FVector2D{};
}

int32 ADifficultySelectionActor::GetCursorIndex() {
    return 0;
}

void ADifficultySelectionActor::DrawInfoText(FVector2D InPos, FColor InColor) {
}

void ADifficultySelectionActor::DrawHelp(float AddX, float AddY) {
}

void ADifficultySelectionActor::DrawDiffList() {
}

void ADifficultySelectionActor::DrawDescriptionText(FVector2D InPos, FColor InColor) {
}

void ADifficultySelectionActor::DrawBlackFade() {
}

void ADifficultySelectionActor::DrawBG() {
}

void ADifficultySelectionActor::ChangeInfoR() {
}

void ADifficultySelectionActor::ChangeInfoL() {
}

ADifficultySelectionActor::ADifficultySelectionActor() {
    this->AssetLoader = NULL;
    this->TitleSpr = NULL;
    this->TitlePlg = NULL;
    this->InheritanceTex = NULL;
    this->TitleSelectDataTable = NULL;
    this->LayoutDataTable = NULL;
    this->UILayoutLayoutDataTable = NULL;
    this->DiffBGScaleAnimFrame = 10;
    this->DiffBGAlphaAnimFrame = 9;
    this->DiffBGGradAlphaAnimFrame = 5;
    this->ListWaitFrame = 0;
    this->InfoInAnimRange = 40;
    this->InfoInAnimFrame = 6;
    this->InfoInWaitFrame = 26;
    this->InfoChangeAnimRange = 40;
    this->InfoChangeFrame = 5;
    this->InfoChangeAnimWaitFrame = 0;
    this->CloseListAndHelpFrame = 6;
    this->CloseListY = 40;
    this->CloseBGFrame = 8;
    this->InheritanceBGFrame = 4;
    this->InheritanceFadeFrame = 30;
    this->CloseBGNotScaleFlag = false;
    this->bChangeAnimDisable = false;
    this->DiffBGX = 652.00f;
    this->DiffBGY = 512.00f;
}

