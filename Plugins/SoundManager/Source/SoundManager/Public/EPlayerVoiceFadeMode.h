#pragma once
#include "CoreMinimal.h"
#include "EPlayerVoiceFadeMode.generated.h"

UENUM(BlueprintType)
enum class EPlayerVoiceFadeMode : uint8 {
    FADE_NONE,
    FADE_OUT,
    FADE_WAIT,
    FADE_IN,
    FADE_MAX UMETA(Hidden),
};

