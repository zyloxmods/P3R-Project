#pragma once
#include "CoreMinimal.h"
#include "EAdcCategory.generated.h"

UENUM(BlueprintType)
enum class EAdcCategory : uint8 {
    COSTUME_SET,
    PERSONA_SET,
    BGM_SET,
    ITEM_SET,
    EXPASS_SET,
    MAX,
};

