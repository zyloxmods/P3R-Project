#include "FldCameraFree.h"
#include "FldCameraBehaviorFree.h"

AFldCameraFree::AFldCameraFree() {
    this->Behavior = CreateDefaultSubobject<UFldCameraBehaviorFree>(TEXT("Behavior"));
}

