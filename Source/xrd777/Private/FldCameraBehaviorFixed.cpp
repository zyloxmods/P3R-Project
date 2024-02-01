#include "FldCameraBehaviorFixed.h"

UFldCameraBehaviorFixed::UFldCameraBehaviorFixed() {
    this->FixedYaw = 0.00f;
    this->FixedPitch = 0.00f;
    this->MarginYaw = 10.00f;
    this->MarginPitch = 10.00f;
    this->RotSpeed = 60.00f;
    this->MarginForward = false;
}

