#pragma once
#include "CoreMinimal.h"
#include "PAGE_MOVE.generated.h"

UENUM(BlueprintType)
enum class PAGE_MOVE : uint8 {
    BASE_PAGE_MOVE,
    THUM_PAGE_MOVE_X,
    THUM_PAGE_MOVE_Y,
    BUTTON_PAGE_MOVE,
    BASE_PAGE_MOVE_NEXT,
    PAGE_MAX UMETA(Hidden),
};

