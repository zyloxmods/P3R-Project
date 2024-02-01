#pragma once
#include "CoreMinimal.h"
#include "EBtlOthersLayout.generated.h"

UENUM(BlueprintType)
enum class EBtlOthersLayout : uint8 {
    SKILL_NAME_PANEL_TEXTCOLL,
    SKILL_NAME_PANEL_POS_Y,
    JYOKYO_HELP_POS_Y_SHORT1LINE,
    JYOKYO_HELP_POS_Y,
    JYOKYO_HELP_ROW_Y,
    JYOKYO_HELP_TEXTCOLL_X,
    ITEM_HELP_TITLE_POS,
    Max,
};

