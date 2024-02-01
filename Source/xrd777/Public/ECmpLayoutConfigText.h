#pragma once
#include "CoreMinimal.h"
#include "ECmpLayoutConfigText.generated.h"

UENUM(BlueprintType)
enum class ECmpLayoutConfigText : uint8 {
    DETAIL_TEXT_COLLISION,
    ITEM_TEXT_COLLISION,
    BUTTON_TEXT_COLLISION,
    CHOICE_TEXT_COLLISION,
    CHOICE_TEXT_POS_Y,
    BGM_TEXT_COLLISION,
    SET_BGM_TEXT_COLLISION,
    Max,
};

