#pragma once
#include "CoreMinimal.h"
#include "EGameControllerType.generated.h"

UENUM(BlueprintType)
enum class EGameControllerType : uint8 {
    None,
    NoCont,
    Unknown,
    XBOX,
    PS4,
    PS5,
    SwitchPro,
    DirectInput,
    Keyboard_Mouse,
};

