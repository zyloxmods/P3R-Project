#include "UIRequest.h"

void UUIRequest::OnFinishedScr(int32 ExitType) {
}

UUIRequest::UUIRequest() {
    this->m_pLoader = NULL;
    this->m_pScrActor = NULL;
    this->m_pBfAsset = NULL;
    this->m_pBmdAsset = NULL;
    this->m_pRefWorld = NULL;
    this->m_pCampSpr = NULL;
    this->m_pCampPlg = NULL;
    this->m_pBGMat = NULL;
    this->m_pBGMatInst = NULL;
    this->m_pRequestDT = NULL;
    this->LayoutData = NULL;
    this->TextColLayoutData = NULL;
    this->TextPosLayoutData = NULL;
    this->DateLayoutData = NULL;
}

