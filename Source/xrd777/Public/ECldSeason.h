#pragma once
#include "CoreMinimal.h"
#include "ECldSeason.generated.h"

UENUM(BlueprintType)
enum class ECldSeason : uint8 {
    Spring,
    Summer,
    Autumn,
    Winter,
    SeasonMax,
};

