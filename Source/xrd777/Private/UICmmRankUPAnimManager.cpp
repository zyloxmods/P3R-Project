#include "UICmmRankUPAnimManager.h"


















void AUICmmRankUPAnimManager::SetShowKeyHelp(bool flag) {
}

void AUICmmRankUPAnimManager::SetPlayStarInAnime(bool flag) {
}

void AUICmmRankUPAnimManager::SetPlayBGCardOutAnime(bool flag) {
}

void AUICmmRankUPAnimManager::SetEndUIOutAnime(bool flag) {
}

void AUICmmRankUPAnimManager::SetEndUIInAnime(bool flag) {
}

void AUICmmRankUPAnimManager::SetEndReverseRankInAnime(bool flag) {
}

void AUICmmRankUPAnimManager::SetEndReverseOutAnime(bool flag) {
}

void AUICmmRankUPAnimManager::SetEndReverseInAnime(bool flag) {
}

void AUICmmRankUPAnimManager::SetEndRecoveryAnime(bool flag) {
}

void AUICmmRankUPAnimManager::SetEndGameoverOneLine(bool flag) {
}


void AUICmmRankUPAnimManager::PlaySE(EUICmmRankUpSE SEType) {
}



AUICmmRankUPAnimManager::AUICmmRankUPAnimManager() {
    this->RippleTime = 0.00f;
    this->RippleInitScale = 0.00f;
    this->CardNumFront = 0;
    this->CardNumBack = 0;
    this->CardScaleFront = 0.00f;
    this->CardScaleBack = 0.00f;
    this->TimeBGFadeIn = 0.00f;
    this->TimeBGFadeOut = 0.00f;
    this->TimeStarMainInAnime = 0.00f;
    this->FrameStartInAnimeInterval = 0.00f;
    this->TimeWaitStarExpansion = 0.00f;
    this->TimeWaitStarVanish = 0.00f;
    this->TimeWaitStarWait = 0.00f;
    this->TimeStartWaitAnimeInterval = 0.00f;
    this->FrameCardFadeOut = 0.00f;
    this->TimeMaxFadeIn = 0.00f;
    this->TimeMaxWaitAfter = 0.00f;
    this->RationGradationUI = 0.00f;
    this->RationPosToOutGradationUI = 0.00f;
    this->RationReverseBG = 0.00f;
    this->ChangeRationReverseColorGradation = 0.00f;
    this->RotRationGradationReverse = 0.00f;
    this->AlphaRationBG12 = 0.00f;
    this->SpeedRationBackCards = 0.00f;
    this->MoveRatioBackBGCard = 0.00f;
    this->MoveRatioFrontBGCard = 0.00f;
    this->ChangeRationReverseColorBackCards = 0.00f;
    this->RotationAllBGCard = 0.00f;
    this->RotRatioArcanaCard = 0.00f;
    this->AlphaRatioArcanaCard = 0.00f;
    this->isVisibleArcanaCardShadow = false;
    this->isVisibleStars = false;
    this->RotateAllStars = 0.00f;
    this->AlphaAllStars = 0.00f;
    this->MoveXRankUpTitle = 0.00f;
    this->AlphaRankUpTitle = 0.00f;
    this->RatioLetter = 0.00f;
    this->AlphaRankupStrings = 0.00f;
    this->MoveRationRankupStrings = 0.00f;
    this->AlphaRankupMaxStrings = 0.00f;
    this->MoveRankupMaxStrings = 0.00f;
    this->IsChangeReverseSprCommuName = false;
    this->MoveXReverseString = 0.00f;
    this->AlphaReverseString = 0.00f;
    this->AlphaKeyhelp = 0.00f;
    this->ScaleKeyhelp = 0.00f;
    this->MoveAllKeyHelp = 0.00f;
    this->MoveMaskKeyHelp = 0.00f;
    this->IsStartKeyHelpIn = false;
    this->IsStartKeyHelpOut = false;
    this->AnimationContentGameOver = 0;
    this->AlphaEFGameOver = 0.00f;
    this->ScaleRationGameOver = 0.00f;
    this->WeaveSpeedGameOver = 0.00f;
    this->ScaleWidthGameOver = 0.00f;
    this->ScaleHightGameOver = 0.00f;
    this->TimeGameOver = 0.00f;
    this->AlphaNormalGameOver = 0.00f;
    this->MoveYGameOver = 0.00f;
    this->AlphaRipple1 = 0.00f;
    this->ScaleRipple1 = 0.00f;
    this->AlphaRipple2 = 0.00f;
    this->ScaleRipple2 = 0.00f;
    this->AlphaRipple3 = 0.00f;
    this->ScaleRipple3 = 0.00f;
    this->IsEndFinalRipple = false;
    this->AlphaCardEffect = 0.00f;
}

