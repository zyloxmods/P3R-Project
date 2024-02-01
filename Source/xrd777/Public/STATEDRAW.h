#pragma once
#include "CoreMinimal.h"
#include "STATEDRAW.generated.h"

UENUM(BlueprintType)
enum class STATEDRAW : uint8 {
    FADE_IN,
    DRAW_WATE,
    FADE_OUT,
    MAX_STATE,
};

