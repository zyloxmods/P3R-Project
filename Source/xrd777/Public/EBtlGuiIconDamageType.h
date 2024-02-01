#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiIconDamageType.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiIconDamageType : uint8 {
    BTL_ICON_DAMAGE_NORMAL,
    BTL_ICON_DAMAGE_CRITICAL,
    BTL_ICON_DAMAGE_WEAK,
    BTL_ICON_DAMAGE_MAX UMETA(Hidden),
};

