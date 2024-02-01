#pragma once
#include "CoreMinimal.h"
#include "EFldPlayerState.generated.h"

UENUM()
enum class EFldPlayerState : int32 {
    None,
    Standby,
    EndBattle,
    Execution,
};

