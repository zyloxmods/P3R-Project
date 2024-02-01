#pragma once
#include "CoreMinimal.h"
#include "EBtlDataTargetArea.generated.h"

UENUM(BlueprintType)
enum class EBtlDataTargetArea : uint8 {
    BTL_DATA_TARGET_AREA_NULL,
    BTL_DATA_TARGET_AREA_ALLY,
    BTL_DATA_TARGET_AREA_ENEMY,
    BTL_DATA_TARGET_AREA_PERSONA = 0x4,
    BTL_DATA_TARGET_AREA_MAX UMETA(Hidden),
};

