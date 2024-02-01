#pragma once
#include "CoreMinimal.h"
#include "ANIMFADEALPHA.generated.h"

UENUM(BlueprintType)
enum class ANIMFADEALPHA : uint8 {
    BLACKBOARD_ALPHA,
    BLUEBOARD_ALPHA,
    GRADATION_ALPHA,
    DAY_ALPHA,
    SCROLLBAR_ALPHA,
    LOG_ALPHA,
    ICON_ALPHA,
    NONE_ALPHA,
    DECO_ALPHA,
    CURSOR_WHITE_ALPHA,
    CURSOR_BLUE_ALPHA,
    FADE_ALPHA_MAX UMETA(Hidden),
};

