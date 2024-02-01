#pragma once
#include "CoreMinimal.h"
#include "EFldCharKeyType.generated.h"

UENUM(BlueprintType)
enum class EFldCharKeyType : uint8 {
    Triangle,
    Ok_Cross,
    Square,
    Cancel_Circle,
    Up,
    Down,
    Right,
    Left,
    L1,
    L2,
    L3,
    R1,
    R2,
    R3,
    OPTION,
    TOUCH,
};

