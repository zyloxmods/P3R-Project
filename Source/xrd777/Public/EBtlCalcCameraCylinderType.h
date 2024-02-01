#pragma once
#include "CoreMinimal.h"
#include "EBtlCalcCameraCylinderType.generated.h"

UENUM(BlueprintType)
enum class EBtlCalcCameraCylinderType : uint8 {
    Enchant,
    TargetGroup,
    Whole,
    None,
    Field,
    World,
};

