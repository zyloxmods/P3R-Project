#pragma once
#include "CoreMinimal.h"
#include "EPlatFormIndex.generated.h"

UENUM(BlueprintType)
enum class EPlatFormIndex : uint8 {
    WIN,
    PS4,
    PS5,
    WIN_GDK,
    XBOX_ONE,
    XSX,
    MAX,
};

