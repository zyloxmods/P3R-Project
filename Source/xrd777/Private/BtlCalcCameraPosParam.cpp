#include "BtlCalcCameraPosParam.h"

FBtlCalcCameraPosParam::FBtlCalcCameraPosParam() {
    this->CylinderType = EBtlCalcCameraCylinderType::Enchant;
    this->DirectToOrigin = false;
    this->DirectAlongLookedAtCharacter = false;
    this->RotateDegree = 0.00f;
    this->RadiusRatio = 0.00f;
    this->RadiusAdd = 0.00f;
    this->RadiusAddHeightRatio = 0.00f;
    this->HeightRatio = 0.00f;
    this->HeightAddRadiusRatio = 0.00f;
    this->LookAtTarget = EBtlCalcCameraLookAtType::CylinderCenter;
    this->LookAtCylinderHightRatio = 0.00f;
    this->LookAtBlendToCenter = 0.00f;
    this->LookAtLineRatio = 0.00f;
    this->UseRoll = false;
    this->Roll = 0.00f;
    this->HeightBlend = 0.00f;
    this->HeightDefault = 0.00f;
    this->Pan = 0.00f;
    this->PanV = 0.00f;
    this->SlideCamX = 0.00f;
    this->UseCommonCylinder = false;
    this->ExceptPersonaCylinder = false;
}

