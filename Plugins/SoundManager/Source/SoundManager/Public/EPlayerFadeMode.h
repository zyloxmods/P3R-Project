#pragma once
#include "CoreMinimal.h"
#include "EPlayerFadeMode.generated.h"

UENUM(BlueprintType)
enum class EPlayerFadeMode : uint8 {
    NONE,
    FADE_OUT,
    FADE_IN,
    FADE_OUT2,
    FADE_WAIT,
};

