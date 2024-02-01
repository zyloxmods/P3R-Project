#include "UIDebugDraw.h"

void AUIDebugDraw::OnFinishedScrDebug(int32 ExitType) {
}

AUIDebugDraw::AUIDebugDraw() {
    this->m_pMapLoader = NULL;
    this->m_pSprAsset = NULL;
    this->m_pMaterial = NULL;
    this->m_pTexture = NULL;
    this->m_pMID = NULL;
    this->m_pPersonaStatus = NULL;
    this->m_pNotePlg = NULL;
    this->m_pScrActor = NULL;
    this->m_pBfAsset = NULL;
    this->m_pBmdAsset = NULL;
}

