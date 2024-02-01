#pragma once
#include "CoreMinimal.h"
#include "appCalculationType.generated.h"

UENUM(BlueprintType)
enum class appCalculationType : uint8 {
    Default_value,
    LINEAR = 0x0,
    DEC,
    ACC,
    COS2,
    H_DEC,
    H_ACC,
    ACC_DEC,
    SIN_2,
    AD_SIN,
    LOOP,
};

