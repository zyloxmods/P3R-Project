#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiState.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiState : uint8 {
    BTL_STATE_NONE,
    BTL_STATE_TOP,
    BTL_STATE_SKILL,
    BTL_STATE_ITEM,
    BTL_STATE_TARGET,
    BTL_STATE_PROMISE,
    BTL_STATE_TACTICS,
    BTL_STATE_THEURGIA,
    BTL_STATE_ANALYZE,
    BTL_STATE_SHIFT,
    BTL_STATE_STRATEGY,
    BTL_STATE_GUARD,
    BTL_STATE_PERSONASTATUS,
    BTL_STATE_NAVIGATION,
    BTL_STATE_NUM,
    BTL_STATE_MAX UMETA(Hidden),
};

