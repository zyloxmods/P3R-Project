#pragma once
#include "CoreMinimal.h"
#include "EBtlDataMoveCursorTactics.generated.h"

UENUM(BlueprintType)
enum class EBtlDataMoveCursorTactics : uint8 {
    BTL_DATA_MOVE_TACTICS_UP,
    BTL_DATA_MOVE_TACTICS_RIGHT,
    BTL_DATA_MOVE_TACTICS_DOWN,
    BTL_DATA_MOVE_TACTICS_LEFT,
    BTL_DATA_MOVE_TACTICS_MAX UMETA(Hidden),
};

