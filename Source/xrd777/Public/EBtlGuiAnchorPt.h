#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiAnchorPt.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiAnchorPt : uint8 {
    BTL_ANC_CENTER,
    BTL_ANC_LU,
    BTL_ANC_RU,
    BTL_ANC_LD,
    BTL_ANC_RD,
    BTL_ANC_MAX UMETA(Hidden),
};

