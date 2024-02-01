#pragma once
#include "CoreMinimal.h"
#include "EBtlCalcStatsType.generated.h"

UENUM(BlueprintType)
enum class EBtlCalcStatsType : uint8 {
    STRENGTH,
    MAGIC,
    ENDURANCE,
    SPEED,
    LUCK,
};

