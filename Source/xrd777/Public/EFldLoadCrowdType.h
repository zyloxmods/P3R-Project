#pragma once
#include "CoreMinimal.h"
#include "EFldLoadCrowdType.generated.h"

UENUM(BlueprintType)
enum class EFldLoadCrowdType : uint8 {
    Auto,
    Parant,
    Child01,
    Child02,
    Holiday,
    Sale,
    Target,
    Max,
};

