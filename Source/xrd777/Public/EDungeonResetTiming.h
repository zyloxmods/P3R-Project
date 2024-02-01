#pragma once
#include "CoreMinimal.h"
#include "EDungeonResetTiming.generated.h"

UENUM(BlueprintType)
enum class EDungeonResetTiming : uint8 {
    Blank,
    FieldInit,
    SetupEnd,
};

