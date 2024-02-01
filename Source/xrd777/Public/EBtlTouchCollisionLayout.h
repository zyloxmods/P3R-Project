#pragma once
#include "CoreMinimal.h"
#include "EBtlTouchCollisionLayout.generated.h"

UENUM(BlueprintType)
enum class EBtlTouchCollisionLayout : uint8 {
    TOP_COMMAND_ATTACK,
    TOP_COMMAND_ATTACK_WH,
    TOP_COMMAND_GUARD,
    TOP_COMMAND_GUARD_WH,
    TOP_COMMAND_SKILL,
    TOP_COMMAND_SKILL_WH,
    TOP_COMMAND_ITEM,
    TOP_COMMAND_ITEM_WH,
    TOP_COMMAND_ORACLE,
    TOP_COMMAND_ORACLE_WH,
    TOP_COMMAND_THEURGIA,
    TOP_COMMAND_THEURGIA_WH,
    TOP_COMMAND_SHIFT,
    TOP_COMMAND_SHIFT_WH,
    Max,
};

