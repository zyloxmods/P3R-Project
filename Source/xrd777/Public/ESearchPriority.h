#pragma once
#include "CoreMinimal.h"
#include "ESearchPriority.generated.h"

UENUM(BlueprintType)
enum class ESearchPriority : uint8 {
    Standard,
    Enemy,
};

