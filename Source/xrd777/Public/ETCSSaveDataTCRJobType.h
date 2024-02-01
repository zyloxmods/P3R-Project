#pragma once
#include "CoreMinimal.h"
#include "ETCSSaveDataTCRJobType.generated.h"

UENUM(BlueprintType)
enum class ETCSSaveDataTCRJobType : uint8 {
    NONE,
    WRITE,
    READ,
};

