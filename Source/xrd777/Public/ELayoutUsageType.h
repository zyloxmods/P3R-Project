#pragma once
#include "CoreMinimal.h"
#include "ELayoutUsageType.generated.h"

UENUM(BlueprintType)
enum class ELayoutUsageType : uint8 {
    Normal,
    FixedFloor,
    MonadPassage,
    ForbiddenDoor,
};

