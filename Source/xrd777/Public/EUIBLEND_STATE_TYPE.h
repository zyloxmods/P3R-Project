#pragma once
#include "CoreMinimal.h"
#include "EUIBLEND_STATE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EUIBLEND_STATE_TYPE : uint8 {
    EUI_Defult_Value,
    UI_DEFAULT = 0x0,
    UI_MUL,
    UI_ADD,
    UI_CREATE_MASK,
    UI_CREATE_MASK_INV,
    UI_DRAW_MIN_ALPHA,
    UI_USE_MASK_DRAW,
    UI_USE_MASK_ADD_DRAW,
    UI_ONE,
    UI_MINIMAP_MASK,
    UI_DEFAULT_AND_NONE_ALPHA,
    UI_MUL_AND_NONE_ALPHA,
    UI_ADD_AND_NONE_ALPHA,
    EUIBLEND_STATE_MAX UMETA(Hidden),
};

