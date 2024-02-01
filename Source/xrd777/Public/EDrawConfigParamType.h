#pragma once
#include "CoreMinimal.h"
#include "EDrawConfigParamType.generated.h"

UENUM(BlueprintType)
enum class EDrawConfigParamType : uint8 {
    DCPT_FLAG,
    DCPT_VALUE,
    DCPT_LANGUAGE,
    DCPT_SELECT,
    DCPT_BGM,
    DCPT_LIST,
    DCPT_MAX UMETA(Hidden),
};

