#pragma once
#include "CoreMinimal.h"
#include "EDifficultySelectionLayout.generated.h"

UENUM(BlueprintType)
enum class EDifficultySelectionLayout : uint8 {
    DIFFICULT_SELECTION_TEXT,
    DIFFICULT_SELECTION_INFO_TEXT,
    DIFFICULT_SELECTION_ROW,
    DIFFICULT_SELECTION_INFO_ROW,
    LIST_ROOT_POS,
    PEACEFUL_POS_OFFSET,
    EASY_POS_OFFSET,
    NORMAL_POS_OFFSET,
    HARD_POS_OFFSET,
    LUNATIC_POS_OFFSET,
    LIST_CURSOR,
    MASK_WIDTH,
    MASK_OFFSET,
    MAX,
};

