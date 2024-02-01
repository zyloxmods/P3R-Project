#include "UIPoetryDraw.h"

void AUIPoetryDraw::Update(const float inDeltaTime) {
}

bool AUIPoetryDraw::UIPoetryIsRankMaxPoetry() {
    return false;
}

void AUIPoetryDraw::UIPoetryGetParam(float EfBaseAlpha_) {
}

void AUIPoetryDraw::UIPoetryDrawRippleOpen(float DeltaTime, float Ripple1, float Ripple2, float Ripple3, float Ripple4, float Ripple5) {
}

void AUIPoetryDraw::UIPoetryDrawRippleMax(float DeltaTime, float Ripple1, float Ripple2, float Ripple3, float Ripple4, float Ripple5, float Ripple6, float Ripple7, float Ripple8) {
}

void AUIPoetryDraw::UIPoetryDrawOkKey() {
}

void AUIPoetryDraw::UIPoetryDrawMaxLine3() {
}

void AUIPoetryDraw::UIPoetryDrawMaxLine2() {
}

void AUIPoetryDraw::UIPoetryDrawMaxLine1() {
}

void AUIPoetryDraw::UIPoetryDrawLine2() {
}

void AUIPoetryDraw::UIPoetryDrawLine1() {
}

void AUIPoetryDraw::UIPoetryDrawAllPoetry() {
}

void AUIPoetryDraw::UIPoetryCreateMaterial() {
}

float AUIPoetryDraw::GetAdjustedLayoutRippleTiming(EUIRippleTimeLayout InLayoutId, float InDefaultTiming) {
    return 0.0f;
}

AUIPoetryDraw::AUIPoetryDraw() {
    this->ArcanaID = 0;
    this->ModeID = 0;
    this->Data_ = NULL;
    this->RippleData_ = NULL;
    this->m_pBlurTex[0] = NULL;
    this->m_pBlurTex[1] = NULL;
    this->m_pBlurTex[2] = NULL;
    this->m_pBlurTex[3] = NULL;
    this->m_pBlurTex[4] = NULL;
    this->m_pBlurTex[5] = NULL;
    this->m_pBlurTex[6] = NULL;
    this->m_pEfTex[0] = NULL;
    this->m_pEfTex[1] = NULL;
    this->m_pEfTex[2] = NULL;
    this->m_pEfTex[3] = NULL;
    this->m_pEfTex[4] = NULL;
    this->m_pEfTex[5] = NULL;
    this->m_pEfTex[6] = NULL;
    this->m_pNormalTex[0] = NULL;
    this->m_pNormalTex[1] = NULL;
    this->m_pNormalTex[2] = NULL;
    this->m_pNormalTex[3] = NULL;
    this->m_pNormalTex[4] = NULL;
    this->m_pNormalTex[5] = NULL;
    this->m_pNormalTex[6] = NULL;
    this->m_ArcanaTex = NULL;
    this->m_ArcanaTexBlur = NULL;
    this->m_ArcanaTexEf = NULL;
    this->pMaterial = NULL;
    this->pRippleMat = NULL;
    this->pMat_Line1[0] = NULL;
    this->pMat_Line1[1] = NULL;
    this->pMat_Line1[2] = NULL;
    this->pMat_Line2[0] = NULL;
    this->pMat_Line2[1] = NULL;
    this->pMat_Line2[2] = NULL;
    this->pMat_Line3[0] = NULL;
    this->pMat_Line3[1] = NULL;
    this->pMat_Line3[2] = NULL;
    this->pMat_Line4[0] = NULL;
    this->pMat_Line4[1] = NULL;
    this->pMat_Line4[2] = NULL;
    this->pMat_Line5[0] = NULL;
    this->pMat_Line5[1] = NULL;
    this->pMat_Line5[2] = NULL;
    this->pMat_Ripples[0] = NULL;
    this->pMat_Ripples[1] = NULL;
    this->pMat_Ripples[2] = NULL;
    this->pMat_Ripples[3] = NULL;
    this->pMat_Ripples[4] = NULL;
    this->pMat_Ripples[5] = NULL;
    this->pMat_Ripples[6] = NULL;
    this->pMat_Ripples[7] = NULL;
    this->EfBaseAlpha = 0.00f;
    this->LineStartTime_1 = 0.00f;
    this->LineStartTime_2 = 0.00f;
    this->LineStartTime_3 = 0.00f;
    this->LineStartTime_4 = 0.00f;
    this->LineStartTime_5 = 0.00f;
    this->OkKeyPushStartTimeMax = 0.00f;
    this->OkKeyPushEndTimeMax = 0.00f;
    this->OkKeyFadeOutAnimTime = 0.00f;
    this->OkKeyFadeOutMovePos = 0.00f;
    this->AnimManager = NULL;
    this->PoetyLayoutData = NULL;
    this->PoetyLayoutDataTable = NULL;
    this->RippleLayoutData = NULL;
    this->RippleLayoutDataTable = NULL;
    this->RippleTimeData = NULL;
    this->RippleTimeDataTable = NULL;
    this->OkNextLayoutData = NULL;
    this->OkNextLayoutDataTable = NULL;
    this->OkNextMaskLayoutData = NULL;
    this->OkNextMaskLayoutDataTable = NULL;
}

