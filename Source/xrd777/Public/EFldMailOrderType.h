#pragma once
#include "CoreMinimal.h"
#include "EFldMailOrderType.generated.h"

UENUM(BlueprintType)
enum class EFldMailOrderType : uint8 {
    Buy,
    Receive,
    Max,
};

