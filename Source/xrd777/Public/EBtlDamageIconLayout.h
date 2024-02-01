#pragma once
#include "CoreMinimal.h"
#include "EBtlDamageIconLayout.generated.h"

UENUM(BlueprintType)
enum class EBtlDamageIconLayout : uint8 {
    DAMAGE_WEAK_BASE,
    DAMAGE_WEAK_TOP_OFS_Y,
    DAMAGE_WEAK_BOTTOM_OFS_Y,
    DAMAGE_CRITICAL_BASE,
    DAMAGE_CRITICAL_TOP_OFS_Y,
    DAMAGE_CRITICAL_BOTTOM_OFS_Y,
    Max,
};

