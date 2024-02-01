#pragma once
#include "CoreMinimal.h"
#include "INDEX_SIZE.generated.h"

UENUM(BlueprintType)
enum class INDEX_SIZE : uint8 {
    SMALL,
    NORMAL,
    LARGE,
    MAX_INDEX_SIZE,
    INDEX_MAX UMETA(Hidden),
};

