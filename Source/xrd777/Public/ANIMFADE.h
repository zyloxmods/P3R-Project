#pragma once
#include "CoreMinimal.h"
#include "ANIMFADE.generated.h"

UENUM(BlueprintType)
enum class ANIMFADE : uint8 {
    FADE_ANIM_IN,
    FADE_ANIM_OUT,
    FADE_ANIM_IN_WATE,
    FADE_ANIM_OUT_WATE,
    FADE_ANIM_MAX UMETA(Hidden),
};

