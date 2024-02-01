#pragma once
#include "CoreMinimal.h"
#include "EAppCharState.generated.h"

UENUM()
enum class EAppCharState : int32 {
    None,
    Move,
    MoveStop,
};

