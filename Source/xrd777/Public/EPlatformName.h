#pragma once
#include "CoreMinimal.h"
#include "EPlatformName.generated.h"

UENUM(BlueprintType)
enum class EPlatformName : uint8 {
    PN_STEAM,
    PN_WINGDK,
    PN_PS4,
    PN_PS5,
    PN_XBOXONE,
    PN_XSX,
    PN_COUNT,
    PN_MAX UMETA(Hidden),
};

