#include "CustomizedRawInputDeviceAxisProperties.h"

FCustomizedRawInputDeviceAxisProperties::FCustomizedRawInputDeviceAxisProperties() {
    this->bEnabled = false;
    this->bInverted = false;
    this->bGamepadStick = false;
    this->bIsDpad = false;
    this->Offset = 0.00f;
    this->bScaling = false;
    this->Scales[0] = 0.00f;
    this->Scales[1] = 0.00f;
}

