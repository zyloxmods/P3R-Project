#pragma once
#include "CoreMinimal.h"
#include "ELOADTRANCE.generated.h"

UENUM(BlueprintType)
enum class ELOADTRANCE : uint8 {
    SCENE_START,
    SCENE_WATE,
    SCENE_END,
    SCENE_MAX UMETA(Hidden),
};

