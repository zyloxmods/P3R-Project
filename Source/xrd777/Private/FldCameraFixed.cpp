#include "FldCameraFixed.h"
#include "FldCameraBehaviorFixed.h"

AFldCameraFixed::AFldCameraFixed() {
    this->Behavior = CreateDefaultSubobject<UFldCameraBehaviorFixed>(TEXT("Behavior"));
}

