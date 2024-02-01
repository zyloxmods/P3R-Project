#pragma once
#include "CoreMinimal.h"
#include "FADE_ANIM.generated.h"

UENUM(BlueprintType)
enum class FADE_ANIM : uint8 {
    FADE_ANIM_IN,
    FADE_ANIM_IN_WATE,
    FADE_ANIM_OUT,
    FADE_ANIM_OUT_WATE,
};

