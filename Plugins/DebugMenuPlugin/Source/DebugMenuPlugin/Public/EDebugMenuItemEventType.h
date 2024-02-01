#pragma once
#include "CoreMinimal.h"
#include "EDebugMenuItemEventType.generated.h"

UENUM(BlueprintType)
enum class EDebugMenuItemEventType : uint8 {
    NONE,
    DRAW,
    BEGIN,
    CHANGE,
    END,
};

