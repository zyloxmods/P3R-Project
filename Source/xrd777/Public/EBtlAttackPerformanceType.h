#pragma once
#include "CoreMinimal.h"
#include "EBtlAttackPerformanceType.generated.h"

UENUM(BlueprintType)
enum class EBtlAttackPerformanceType : uint8 {
    Normal,
    Long,
    Critical,
};

