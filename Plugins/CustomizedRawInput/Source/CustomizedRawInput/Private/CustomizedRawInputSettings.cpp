#include "CustomizedRawInputSettings.h"

UCustomizedRawInputSettings::UCustomizedRawInputSettings() {
    this->DeviceConfigurations.AddDefaulted(5);
    this->DisconnectWaitSeconds = 1.00f;
    this->ControllerId = 5;
}

