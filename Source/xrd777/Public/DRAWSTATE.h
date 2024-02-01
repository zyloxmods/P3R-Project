#pragma once
#include "CoreMinimal.h"
#include "DRAWSTATE.generated.h"

UENUM(BlueprintType)
enum class DRAWSTATE : uint8 {
    DRAW_FADE_IN,
    DRAW_WATE,
    DRAW_FADE_OUT,
    MAX_STATE,
};

