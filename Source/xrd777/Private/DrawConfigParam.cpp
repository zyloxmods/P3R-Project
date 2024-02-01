#include "DrawConfigParam.h"

FDrawConfigParam::FDrawConfigParam() {
    this->Type = EDrawConfigParamType::DCPT_FLAG;
    this->MenueID = 0;
    this->Value = 0;
    this->bFlag = false;
    this->bEnable = false;
    this->ListType = EDrawConfigListType::NONE;
    this->ListMaxNum = 0;
    this->ListDefault = 0;
    this->DrawStatus = 0;
    this->DescriptionScale = 0.00f;
}

