#pragma once
#include "CoreMinimal.h"
#include "EAccessInfoCarNoDisplayType.generated.h"

UENUM(BlueprintType)
enum class EAccessInfoCarNoDisplayType : uint8 {
    CAR_NO_LAST,
    CAR_NO_FIRST,
    CAR_NO_MAX UMETA(Hidden),
};

