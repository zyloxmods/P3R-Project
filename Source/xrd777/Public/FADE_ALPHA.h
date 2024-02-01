#pragma once
#include "CoreMinimal.h"
#include "FADE_ALPHA.generated.h"

UENUM(BlueprintType)
enum class FADE_ALPHA : uint8 {
    NAVY_ALPHA,
    GRAD_ALPHA,
    UNDER_SHADOW_ALPHA,
    BASE_ALPHA,
    BUTTON_ALPHA,
    TEXT_ALPHA,
    THUM_ALPHA,
    GROUND_ALPHA,
    TEXT_ALPHA_NEXT,
    FADE_MAX UMETA(Hidden),
};

