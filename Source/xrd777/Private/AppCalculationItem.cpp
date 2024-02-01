#include "AppCalculationItem.h"

FAppCalculationItem::FAppCalculationItem() {
    this->SrcValue = 0.00f;
    this->DstValue = 0.00f;
    this->Delay = 0;
    this->DstFrame = 0;
    this->Type = appCalculationType::LINEAR;
}

