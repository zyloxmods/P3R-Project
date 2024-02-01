#pragma once
#include "CoreMinimal.h"
#include "EFldCrowdSeason.generated.h"

UENUM(BlueprintType)
enum class EFldCrowdSeason : uint8 {
    None,
    Winter,
    Summer,
    EndTime,
    Max,
};

