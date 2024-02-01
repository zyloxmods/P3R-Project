#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadLayout.generated.h"

UENUM(BlueprintType)
enum class ESaveLoadLayout : uint8 {
    SAVE_HELP,
    SAVE_HELP_TEXT,
    LOAD_HELP,
    LOAD_HELP_TEXT,
    ROLL_BACK_HELP,
    ROLL_BACK_HELP_TEXT,
    LOCATION_TEXTCOL,
    LV_POS,
    LVNUM_POS,
    LVNUM_10POS,
    PL_POS,
    PL_TEXTCOL,
    PL_LF_THRESHOLD,
    MAX,
};

