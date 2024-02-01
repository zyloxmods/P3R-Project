#pragma once
#include "CoreMinimal.h"
#include "EFldCrowdRoutePtn.generated.h"

UENUM(BlueprintType)
enum class EFldCrowdRoutePtn : uint8 {
    Normal,
    Outward,
    Return,
};

