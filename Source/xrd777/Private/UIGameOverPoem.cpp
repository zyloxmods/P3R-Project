#include "UIGameOverPoem.h"

void AUIGameOverPoem::StartRipple() {
}

AUIGameOverPoem::AUIGameOverPoem() {
    this->ripple[0] = NULL;
    this->ripple[1] = NULL;
    this->ripple[2] = NULL;
    this->openRipplesSize[0] = 0.00f;
    this->openRipplesSize[1] = 0.00f;
    this->openRipplesSize[2] = 0.00f;
    this->pLoader = NULL;
    this->PoetryData_ = NULL;
    this->pMaterial = NULL;
    this->pRippleMat = NULL;
    this->AnimManager = NULL;
    this->pParamLayoutData = NULL;
    this->pLayoutDataTable = NULL;
}

