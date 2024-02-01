#include "UIBackLog.h"

AUIBackLog::AUIBackLog() {
    this->m_pLoader = NULL;
    this->BackLoadDrawClass = NULL;
    this->pAssetLoader = NULL;
    this->pBackLoadDraw = NULL;
    this->tex = NULL;
    this->captureBackGround = NULL;
    this->pParamLayoutData = NULL;
    this->pLayoutDataTable = NULL;
}

