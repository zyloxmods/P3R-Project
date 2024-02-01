#pragma once
#include "CoreMinimal.h"
#include "ESteamControllerType.generated.h"

UENUM(BlueprintType)
enum class ESteamControllerType : uint8 {
    None,
    NoCont,
    Unknown,
    Steam,
    XBOX360,
    XBOX_ONE,
    XInput,
    PS4,
    PS5,
    SwitchPro,
    DirectInput,
    Other,
    Keyboard,
};

