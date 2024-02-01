#include "FadePgBattleEventWipe.h"

UFadePgBattleEventWipe::UFadePgBattleEventWipe() {
    this->pActor = NULL;
    this->LoadClass = NULL;
    this->pAssetLoader = NULL;
    this->m_bLoading = false;
    this->m_bLoaded = false;
    this->m_bMainLoaded = false;
    this->m_bIsAnimation = false;
    this->requestNo = 0;
}

