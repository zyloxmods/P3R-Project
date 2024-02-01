#pragma once
#include "CoreMinimal.h"
#include "EAcbFileMode.generated.h"

UENUM(BlueprintType)
enum class EAcbFileMode : uint8 {
    NONE,
    READ,
    SYNC,
    FREE,
};

