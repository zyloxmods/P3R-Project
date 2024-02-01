#pragma once
#include "CoreMinimal.h"
#include "EUINameEntryLayout.generated.h"

UENUM(BlueprintType)
enum class EUINameEntryLayout : uint8 {
    NAME_LEFT,
    NAME_RIGHT,
    CURSOR_NAME_LEFT,
    CURSOR_NAME_RIGHT,
    OPTION,
    DECISION,
    DARK_BLUE_LIGHT,
    LIGHT_BLUE_LIGHT,
    BLUE_LIGHT_LEFT,
    NONAME_LEFT,
    NONAME_RIGHT,
    Max,
};

