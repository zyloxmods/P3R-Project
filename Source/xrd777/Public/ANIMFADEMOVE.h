#pragma once
#include "CoreMinimal.h"
#include "ANIMFADEMOVE.generated.h"

UENUM(BlueprintType)
enum class ANIMFADEMOVE : uint8 {
    BLACKBOARD_POS,
    BLUEBOARD_POS,
    BLUEBOARD_ROLL,
    DAY_POS,
    SCROLLBAR_POS,
    LOG_POS,
    ICON_POS,
    NONE_POS,
    DECO_POS,
    CURSOR_WHITE_POS,
    CURSOR_BLUE_POS,
    FADE_MOVE_MAX UMETA(Hidden),
};

