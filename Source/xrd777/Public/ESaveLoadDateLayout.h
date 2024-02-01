#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadDateLayout.generated.h"

UENUM(BlueprintType)
enum class ESaveLoadDateLayout : uint8 {
    MONTH,
    DAY_1_DIG,
    DAY_2_DIG,
    SEL_MONTH,
    SEL_DAY_1_DIG,
    SEL_DAY_2_DIG,
    MAX,
};

