#pragma once
#include "CoreMinimal.h"
#include "EBtlDataEfficacyType.generated.h"

UENUM(BlueprintType)
enum class EBtlDataEfficacyType : uint8 {
    BTL_DATA_EFFICACY_NULL,
    BTL_DATA_EFFICACY_NON = 0x0,
    BTL_DATA_EFFICACY_BUTURI,
    BTL_DATA_EFFICACY_MAGIC,
    BTL_DATA_EFFICACY_MAX UMETA(Hidden),
};

