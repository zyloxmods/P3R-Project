#include "UIMorphTestActor.h"

AUIMorphTestActor::AUIMorphTestActor() {
    this->m_pUimMain = NULL;
    this->mpUimSubAry[0] = NULL;
    this->mpUimSubAry[1] = NULL;
    this->mpUimSubAry[2] = NULL;
    this->mpUimSubAry[3] = NULL;
    this->mpUimSubAry[4] = NULL;
    this->m_pUimCross = NULL;
    this->m_pUimColor = NULL;
    this->m_pUimUV = NULL;
    this->m_pUimPoly = NULL;
    this->m_pUimUVCol = NULL;
    this->m_TexMain = NULL;
    this->m_TexSubAry[0] = NULL;
    this->m_TexSubAry[1] = NULL;
    this->m_TexSubAry[2] = NULL;
    this->m_TexSubAry[3] = NULL;
    this->m_TexSubAry[4] = NULL;
    this->m_TexMask = NULL;
    this->m_pSpr = NULL;
    this->pMayaCamera = NULL;
}

