#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadLayout2.generated.h"

UENUM(BlueprintType)
enum class ESaveLoadLayout2 : uint8 {
    CLEAR_DATA,
    NETWORK_NOT_SET,
    NETWORK_DISCONNECTED,
    NETWORK_NOT_SET_SEL,
    NETWORK_DISCONNECTED_SEL,
    MAX,
};

