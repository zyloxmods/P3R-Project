#pragma once
#include "CoreMinimal.h"
#include "PAGE_MOVE_TYPE.generated.h"

UENUM(BlueprintType)
enum class PAGE_MOVE_TYPE : uint8 {
    PREV_MOVE,
    NEXT_MOVE,
    PAGE_MOVE_MAX UMETA(Hidden),
};

