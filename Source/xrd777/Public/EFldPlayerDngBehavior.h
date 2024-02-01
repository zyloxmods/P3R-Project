#pragma once
#include "CoreMinimal.h"
#include "EFldPlayerDngBehavior.generated.h"

UENUM()
enum class EFldPlayerDngBehavior : int32 {
    None,
    Free,
    Turn,
    Brake,
    Braking,
    BrakingTurn,
    BrakingEnd,
    Attack,
    Attacking,
    Encount,
    Encounting,
};

