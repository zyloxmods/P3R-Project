#pragma once
#include "CoreMinimal.h"
#include "EUIGaussType.generated.h"

UENUM(BlueprintType)
enum class EUIGaussType : uint8 {
    VeryWeak1,
    Weak2,
    Normal3,
    Strong4,
    VeryStrong5,
    MostWeak0,
    Off,
};

