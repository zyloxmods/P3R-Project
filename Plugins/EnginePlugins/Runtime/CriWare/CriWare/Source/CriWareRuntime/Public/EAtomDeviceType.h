#pragma once
#include "CoreMinimal.h"
#include "EAtomDeviceType.generated.h"

UENUM(BlueprintType)
enum class EAtomDeviceType : uint8 {
    DEVICE_TYPE_HDMI = 0x1,
    DEVICE_TYPE_HEADPHONE,
    DEVICE_TYPE_BUILT_IN_SPEAKER,
    DEVICE_TYPE_PAD_SPEAKER,
    DEVICE_TYPE_VIBRATION,
    DEVICE_TYPE_UNKNOWN = 0x0,
    DEVICE_TYPE_UNAVAILABLE = 0xFE,
    DEVICE_TYPE_MAX UMETA(Hidden),
};

