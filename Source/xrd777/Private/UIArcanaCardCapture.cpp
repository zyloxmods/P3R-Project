#include "UIArcanaCardCapture.h"

void AUIArcanaCardCapture::StartPoemOutAnime() {
}

void AUIArcanaCardCapture::StartAnimeReverse() {
}

void AUIArcanaCardCapture::StartAnimeRecoveryTurn() {
}

void AUIArcanaCardCapture::StartAnimeRecoveryOutv() {
}

void AUIArcanaCardCapture::StartAnimeRecoveryIn() {
}

void AUIArcanaCardCapture::FadeOutEffect() {
}

void AUIArcanaCardCapture::FadeInEffect() {
}

AUIArcanaCardCapture::AUIArcanaCardCapture() {
    this->pModelCaptureTex = NULL;
    this->CardContainer = NULL;
    this->CardBp = NULL;
    this->AnimSequence[0] = NULL;
    this->AnimSequence[1] = NULL;
    this->AnimSequence[2] = NULL;
    this->AnimSequence[3] = NULL;
    this->AnimSequence[4] = NULL;
    this->AnimSequence[5] = NULL;
    this->AnimSequence[6] = NULL;
    this->AnimSequence[7] = NULL;
    this->AnimSequence[8] = NULL;
    this->pUISceneCapture2D = NULL;
    this->UISceneCaptureClass = NULL;
    this->AnimManager = NULL;
    this->CardEffect = NULL;
    this->EffectComponent = NULL;
    this->SkeltalComponent = NULL;
}

