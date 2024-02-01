#include "SimpleShopTable.h"

FSimpleShopTable::FSimpleShopTable() {
    this->SellSun = false;
    this->SellMon = false;
    this->SellTue = false;
    this->SellWed = false;
    this->SellThr = false;
    this->SellFri = false;
    this->SellSat = false;
    this->LiftMonth = 0;
    this->LiftDays = 0;
    this->Stock = 0;
    this->ResetSun = false;
    this->ResetMon = false;
    this->ResetTue = false;
    this->ResetWed = false;
    this->ResetThr = false;
    this->ResetFri = false;
    this->ResetSat = false;
}

