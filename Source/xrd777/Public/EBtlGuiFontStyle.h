#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiFontStyle.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiFontStyle : uint8 {
    BTL_FSTYLE_SMALL,
    BTL_FSTYLE_MEDIUM,
    BTL_FSTYLE_MAX UMETA(Hidden),
};

