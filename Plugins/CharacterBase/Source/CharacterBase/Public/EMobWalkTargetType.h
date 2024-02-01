#pragma once
#include "CoreMinimal.h"
#include "EMobWalkTargetType.generated.h"

UENUM(BlueprintType)
enum class EMobWalkTargetType : uint8 {
    Normal,
    Stop,
    Max,
};

