#pragma once
#include "CoreMinimal.h"
#include "WAVETYPE.generated.h"

UENUM(BlueprintType)
enum class WAVETYPE : uint8 {
    FIRST,
    SECOND,
    THIRD,
    MAX_WAVETYPE,
};

