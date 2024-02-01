#include "FldCameraBehaviorBase.h"

UFldCameraBehaviorBase::UFldCameraBehaviorBase() {
    this->BaseOwner = NULL;
    this->ForwardType = EFldCameraForwardType::Camera;
    this->FreeForward = NULL;
}

