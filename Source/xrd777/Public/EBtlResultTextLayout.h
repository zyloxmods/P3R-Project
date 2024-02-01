#pragma once
#include "CoreMinimal.h"
#include "EBtlResultTextLayout.generated.h"

UENUM(BlueprintType)
enum class EBtlResultTextLayout : uint8 {
    PERSONA_NAME_POS,
    PERSONA_NAME_DOT_OFS_POS,
    ITEM_NAME,
    ITEM_NAME_POS,
    LV_UP_CHARA_NAME_POS,
    LV_UP_PERSONA_NAME,
    LV_UP_PERSONA_NAME_DOT_OFS_POS,
    LV_UP_PERSONA_NAME_POS,
    Max,
};

