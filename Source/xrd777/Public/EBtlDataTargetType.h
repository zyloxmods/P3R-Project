#pragma once
#include "CoreMinimal.h"
#include "EBtlDataTargetType.generated.h"

UENUM(BlueprintType)
enum class EBtlDataTargetType : uint8 {
    BTL_DATA_TARGET_TYPE_NULL,
    BTL_DATA_TARGET_TYPE_SINGLE = 0x0,
    BTL_DATA_TARGET_TYPE_GROUP,
    BTL_DATA_TARGET_TYPE_ALL,
    BTL_DATA_TARGET_TYPE_NON,
    BTL_DATA_TARGET_TYPE_MAX UMETA(Hidden),
};

