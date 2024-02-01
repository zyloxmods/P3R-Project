#pragma once
#include "CoreMinimal.h"
#include "EBtlBadStatusIcon.generated.h"

UENUM(BlueprintType)
enum class EBtlBadStatusIcon : uint8 {
    Knockedout,
    Charm,
    Upset,
    Panic,
    Fear,
    Anger,
    Freeze,
    Shock,
    Poison,
    Overlimit,
    Overheat,
    Bomb,
    Dead,
    Down,
    None,
};

