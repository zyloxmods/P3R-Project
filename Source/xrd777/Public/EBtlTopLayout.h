#pragma once
#include "CoreMinimal.h"
#include "EBtlTopLayout.generated.h"

UENUM(BlueprintType)
enum class EBtlTopLayout : uint8 {
    COMMAND_ITEM,
    COMMAND_GUARD_MARU,
    COMMAND_GUARD_BATSU,
    COMMAND_SHIFT,
    Max,
};

