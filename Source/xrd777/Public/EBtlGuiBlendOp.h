#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiBlendOp.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiBlendOp : uint8 {
    BTL_OP_ADD,
    BTL_OP_SUBTRACT,
    BTL_OP_MIN,
    BTL_OP_MAX UMETA(Hidden),
    BTL_OP_REVSUB,
};

