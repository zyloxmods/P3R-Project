#include "ModelCaptureLayoutItem.h"

FModelCaptureLayoutItem::FModelCaptureLayoutItem() {
    this->FOV = 0.00f;
    this->bRotationLocal = false;
    this->bYawLimit = false;
    this->YawMinusLimit = 0.00f;
    this->YawPlusLimit = 0.00f;
    this->AnimType = EAnimationType::Physics;
}

