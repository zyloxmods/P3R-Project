#pragma once
#include "CoreMinimal.h"
#include "EFldCrowdTime.generated.h"

UENUM(BlueprintType)
enum class EFldCrowdTime : uint8 {
    None,
    Noon,
    Evening,
    Night,
    Shadow,
    Max,
};

