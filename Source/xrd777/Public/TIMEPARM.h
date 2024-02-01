#pragma once
#include "CoreMinimal.h"
#include "TIMEPARM.generated.h"

UENUM(BlueprintType)
enum class TIMEPARM : uint8 {
    NIGHT,
    DAYTIME,
    MORNING,
    MAX,
};

