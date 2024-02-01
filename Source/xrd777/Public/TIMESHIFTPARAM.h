#pragma once
#include "CoreMinimal.h"
#include "TIMESHIFTPARAM.generated.h"

UENUM(BlueprintType)
enum class TIMESHIFTPARAM : uint8 {
    MORNING,
    EVENING,
    NIGHT,
    SHADOWHOUR,
};

