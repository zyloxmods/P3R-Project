#include "FldCameraBehaviorFree.h"

UFldCameraBehaviorFree::UFldCameraBehaviorFree() {
    this->DrivedOwner = NULL;
    this->FarLength = 500.00f;
    this->NearLength = 300.00f;
    this->ZoomTime = 1.00f;
    this->InitialPitch = -25.00f;
    this->DefaultMoveSpeed = 500.00f;
    this->NormalFov = 90.00f;
    this->DashFov = 50.00f;
    this->FovAnimSpeed = 40.00f;
    this->ExtrusionSpeed = 2000.00f;
    this->UpLimitBegin = -20.00f;
    this->UpLimitEnd = -60.00f;
    this->UpLimitLength = 150.00f;
    this->DownLimitBegin = 10.00f;
    this->DownLimitEnd = 30.00f;
    this->DownLimitLength = 200.00f;
    this->BlurAmount = 1.00f;
    this->PushOutOffset = 1.00f;
    this->State = EFldCameraBehaviorFreeState::None;
    this->NextState = EFldCameraBehaviorFreeState::None;
    this->AnimTime = 0.00f;
    this->bResetDirectionOnce = false;
}

