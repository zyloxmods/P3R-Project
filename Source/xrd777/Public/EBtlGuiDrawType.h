#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiDrawType.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiDrawType : uint8 {
    BTL_DTYPE_NORMAL,
    BTL_DTYPE_INVALPHA,
    BTL_DTYPE_GAUSS,
    BTL_DTYPE_GAUSSINVAPLHA,
    BTL_DTYPE_GAUSSTEXTURE,
    BTL_DTYPE_GAUSSINVTEXTURE,
    BTL_DTYPE_MULTIPLY,
    BTL_DTYPE_MAX UMETA(Hidden),
};

