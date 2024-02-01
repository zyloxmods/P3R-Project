#pragma once
#include "CoreMinimal.h"
#include "ETitleLayout.generated.h"

UENUM(BlueprintType)
enum class ETitleLayout : uint8 {
    PRESS_ANY_BUTTON_END_POS,
    PRESS_ANY_BUTTON_POS_OFFSET,
    LIST_NEW_GAME,
    LIST_LOAD_GAME,
    LIST_CONFIG,
    LIST_CURSOR,
    MASK_WIDTH,
    PRESS_ANY_BUTTON_MASK_WIDTH,
    PS_PRESS_ANY_BUTTON_END_POS,
    PS_PRESS_ANY_BUTTON_POS_OFFSET,
    PS_PRESS_ANY_BUTTON_MASK_WIDTH,
    MAX,
};

