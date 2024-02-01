#pragma once
#include "CoreMinimal.h"
#include "EBtlGuardLayout.generated.h"

UENUM(BlueprintType)
enum class EBtlGuardLayout : uint8 {
    GUARD_HEADLINE_WIDTH_TOP,
    GUARD_HEADLINE_WIDTH_BOTTOM,
    Max,
};

