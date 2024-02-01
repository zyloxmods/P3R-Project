#pragma once
#include "CoreMinimal.h"
#include "EBtlCommonEventType.generated.h"

UENUM(BlueprintType)
enum class EBtlCommonEventType : uint8 {
    RETRY,
    MAX,
};

