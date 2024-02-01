#pragma once
#include "CoreMinimal.h"
#include "EBtlFormationSizeType.generated.h"

UENUM(BlueprintType)
enum class EBtlFormationSizeType : uint8 {
    BTL_FORMATION_POINT_SIZE_S,
    BTL_FORMATION_POINT_SIZE_M,
    BTL_FORMATION_POINT_SIZE_L,
    BTL_FORMATION_POINT_SIZE_MAX UMETA(Hidden),
};

