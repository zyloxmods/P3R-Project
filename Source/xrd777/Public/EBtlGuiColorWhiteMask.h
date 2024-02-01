#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiColorWhiteMask.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiColorWhiteMask : uint8 {
    BTL_CW_RGBA,
    BTL_CW_R,
    BTL_CW_G,
    BTL_CW_B,
    BTL_CW_A,
    BTL_CW_RG,
    BTL_CW_BA,
    BTL_CW_RGB,
    BTL_CW_NONE,
    BTL_CW_MAX UMETA(Hidden),
};

