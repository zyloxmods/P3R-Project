#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiOT.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiOT : uint8 {
    BTL_OT_LOW,
    BTL_OT_WIPE,
    BTL_OT_MIDDLE,
    BTL_OT_HIGH,
    BTL_OT_FADE,
    BTL_OT_FADE_HIGH,
    BTL_OT_PTPANEL_HIGH,
    BTL_OT_MAX UMETA(Hidden),
};

