#pragma once
#include "CoreMinimal.h"
#include "EFldHitType.generated.h"

UENUM(BlueprintType)
enum class EFldHitType : uint8 {
    Normal,
    AreaChange,
};

