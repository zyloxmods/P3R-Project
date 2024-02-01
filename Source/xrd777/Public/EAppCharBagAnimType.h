#pragma once
#include "CoreMinimal.h"
#include "EAppCharBagAnimType.generated.h"

UENUM(BlueprintType)
enum class EAppCharBagAnimType : uint8 {
    EC_None,
    EC_Stand,
    EC_Run,
    EC_Max,
};

