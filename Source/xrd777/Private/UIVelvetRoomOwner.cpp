#include "UIVelvetRoomOwner.h"

void UUIVelvetRoomOwner::OnFinishedScr(int32 ExitType) {
}

UUIVelvetRoomOwner::UUIVelvetRoomOwner() {
    this->m_pLoader = NULL;
    this->m_pScrActor = NULL;
    this->m_pBfAsset = NULL;
    this->m_pBmdAsset = NULL;
    this->m_pPersonaStatusActor = NULL;
    this->m_pCombineCalc = NULL;
    this->m_pCombineStateTex = NULL;
    this->m_pVelvetRoomDraw = NULL;
    this->m_pVelvetRoomDrawClass = NULL;
    this->CommonLayoutDataTable = NULL;
    this->CompendiumLayoutDataTable = NULL;
    this->SearchLayoutDataTable = NULL;
    this->SpreadLayoutDataTable = NULL;
    this->SpecialLayoutDataTable = NULL;
    this->SummonLayoutDataTable = NULL;
    this->CommonTextLayoutDataTable = NULL;
    this->HelpLayoutDataTable = NULL;
    this->pParamLayoutDataCommon = NULL;
    this->pParamLayoutDataCompendium = NULL;
    this->pParamLayoutDataSearch = NULL;
    this->pParamLayoutDataSpread = NULL;
    this->pParamLayoutDataSpecial = NULL;
    this->pParamLayoutDataSummon = NULL;
    this->pParamLayoutDataCommonText = NULL;
    this->pParamLayoutDataHelp = NULL;
}

