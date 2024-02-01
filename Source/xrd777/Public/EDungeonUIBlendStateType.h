#pragma once
#include "CoreMinimal.h"
#include "EDungeonUIBlendStateType.generated.h"

UENUM(BlueprintType)
enum class EDungeonUIBlendStateType : uint8 {
    Default,
    Mul,
    Add,
};

