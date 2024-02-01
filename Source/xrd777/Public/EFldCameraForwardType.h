#pragma once
#include "CoreMinimal.h"
#include "EFldCameraForwardType.generated.h"

UENUM()
enum class EFldCameraForwardType : int32 {
    Camera,
    WorldX,
    WorldInverseX,
    WorldY,
    WorldInverseY,
    Free,
    SplinePath,
};

