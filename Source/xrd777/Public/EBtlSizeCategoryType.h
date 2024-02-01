#pragma once
#include "CoreMinimal.h"
#include "EBtlSizeCategoryType.generated.h"

UENUM(BlueprintType)
enum class EBtlSizeCategoryType : uint8 {
    CATEGORY_S,
    CATEGORY_M,
    CATEGORY_L,
    CATEGORY_LL,
    CATEGORY_EX,
    CATEGORY_MAX UMETA(Hidden),
};

