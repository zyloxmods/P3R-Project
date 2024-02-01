#include "UICmmRankUpBG.h"

void AUICmmRankUpBG::Update(const float inDeltaTime) {
}

void AUICmmRankUpBG::UICmmDrawBG_Red() {
}

void AUICmmRankUpBG::UICmmDrawBG_5() {
}

void AUICmmRankUpBG::UICmmDrawBG_4(FColor Color) {
}

void AUICmmRankUpBG::UICmmDrawBG_3(FColor Top, FColor Bottom) {
}

void AUICmmRankUpBG::UICmmDrawBG_2(FColor Top, FColor Bottom) {
}

void AUICmmRankUpBG::UICmmDrawBG_1(FColor Top, FColor Bottom) {
}

bool AUICmmRankUpBG::UICmmBGCapture() {
    return false;
}

void AUICmmRankUpBG::StartAnimePoemBG1In() {
}


AUICmmRankUpBG::AUICmmRankUpBG() {
    this->SrcColor = EUIBlendFactor::UI_BF_Zero;
    this->DstColor = EUIBlendFactor::UI_BF_Zero;
    this->SrcAlpha = EUIBlendFactor::UI_BF_Zero;
    this->DstAlpha = EUIBlendFactor::UI_BF_Zero;
    this->bCaptureBG = false;
    this->pBGMaterial = NULL;
    this->isAlreadySetBGMaterial = false;
    this->AnimManager = NULL;
}

