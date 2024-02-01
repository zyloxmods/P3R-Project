#pragma once
#include "CoreMinimal.h"
#include "EShadowSettingCategory.generated.h"

UENUM(BlueprintType)
enum class EShadowSettingCategory : uint8 {
    FIELD,
    DUNGEONPARTS,
    EVENT_MAIN,
    EVENT_CMMU,
};

