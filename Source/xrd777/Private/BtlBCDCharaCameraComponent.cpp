#include "BtlBCDCharaCameraComponent.h"

UBtlBCDCharaCameraComponent::UBtlBCDCharaCameraComponent() {
    this->RadiumRation = 0.00f;
    this->HeightRation = 0.00f;
    this->RotateDegree = 0.00f;
    this->Pan = 0.00f;
    this->Roll = 0.00f;
    this->bUseCommonCylinder = false;
    this->TargetAreaType = EBtlEventAreaType::BTL_AREA_NULL;
}

