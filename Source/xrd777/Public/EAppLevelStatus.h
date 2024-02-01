#pragma once
#include "CoreMinimal.h"
#include "EAppLevelStatus.generated.h"

UENUM(BlueprintType)
enum class EAppLevelStatus : uint8 {
    LevelInvalid,
    LevelUnloaded,
    LevelLoading,
    LevelLoaded,
    LevelMakingVisible,
    LevelVisible,
    LevelAlwaysLoaded,
};

