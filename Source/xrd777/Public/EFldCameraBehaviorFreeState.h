#pragma once
#include "CoreMinimal.h"
#include "EFldCameraBehaviorFreeState.generated.h"

UENUM()
enum class EFldCameraBehaviorFreeState : int32 {
    None,
    Free,
    ZoomAnim,
    MoveToDefault,
};

