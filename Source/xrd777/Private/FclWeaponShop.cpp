#include "FclWeaponShop.h"

AFclWeaponShop::AFclWeaponShop() {
    this->Loader_ = NULL;
    this->LineupTable_ = NULL;
    this->BfAsset_ = NULL;
    this->BmdAsset_ = NULL;
    this->_ComSpr00 = NULL;
    this->_ComPlg00 = NULL;
    this->_Spr00 = NULL;
    this->_Plg00 = NULL;
    this->pParamLayoutDataRoot = NULL;
    this->pLayoutDataTableRoot = NULL;
    this->pParamLayoutDataChara = NULL;
    this->pLayoutDataTableChara = NULL;
    this->pParamLayoutDataCharaText = NULL;
    this->pLayoutDataTableCharaText = NULL;
    this->pParamLayoutDataBuyText = NULL;
    this->pLayoutDataTableBuyText = NULL;
    this->pParamLayoutDataBuyHelpText = NULL;
    this->pLayoutDataTableBuyHelpText = NULL;
    this->pParamLayoutDataSellText = NULL;
    this->pLayoutDataTableSellText = NULL;
    this->pParamLayoutDataTradeInText = NULL;
    this->pLayoutDataTableTradeInText = NULL;
    this->pParamLayoutDataOther = NULL;
    this->pLayoutDataTableOther = NULL;
    this->_DrawActorClass = NULL;
    this->_DrawActor = NULL;
}

