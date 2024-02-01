#pragma once
#include "CoreMinimal.h"
#include "EBtlCalcCameraLookAtType.generated.h"

UENUM(BlueprintType)
enum class EBtlCalcCameraLookAtType : uint8 {
    CylinderCenter,
    UpShot,
    BustShot,
    LongShot,
    Cylinder,
    Field,
};

