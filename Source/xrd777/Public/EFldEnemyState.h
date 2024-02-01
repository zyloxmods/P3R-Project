#pragma once
#include "CoreMinimal.h"
#include "EFldEnemyState.generated.h"

UENUM()
enum class EFldEnemyState : int32 {
    None,
    Standby,
    Alive,
    Dead,
    Execution,
};

