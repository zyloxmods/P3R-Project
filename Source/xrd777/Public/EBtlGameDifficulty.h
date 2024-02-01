#pragma once
#include "CoreMinimal.h"
#include "EBtlGameDifficulty.generated.h"

UENUM(BlueprintType)
enum class EBtlGameDifficulty : uint8 {
    BTL_SAFETY,
    BTL_EASY,
    BTL_NORMAL,
    BTL_HARD,
    BTL_RISKY,
    BTL_MAX UMETA(Hidden),
};

