#include "AtomDeviceWatcher.h"

EAtomDeviceType UAtomDeviceWatcher::GetDeviceType(int32 ASRRackID) {
    return EAtomDeviceType::DEVICE_TYPE_HDMI;
}

FString UAtomDeviceWatcher::GetDeviceName() {
    return TEXT("");
}

int32 UAtomDeviceWatcher::GetDeviceChannelCount(int32 ASRRackID) {
    return 0;
}

UAtomDeviceWatcher::UAtomDeviceWatcher() {
}

