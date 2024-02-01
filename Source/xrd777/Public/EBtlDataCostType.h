#pragma once
#include "CoreMinimal.h"
#include "EBtlDataCostType.generated.h"

UENUM(BlueprintType)
enum class EBtlDataCostType : uint8 {
    BTL_DATA_COST_NONE,
    BTL_DATA_COST_HP,
    BTL_DATA_COST_SP,
    BTL_DATA_COST_MAX UMETA(Hidden),
};

