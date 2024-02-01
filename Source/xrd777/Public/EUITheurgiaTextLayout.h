#pragma once
#include "CoreMinimal.h"
#include "EUITheurgiaTextLayout.generated.h"

UENUM(BlueprintType)
enum class EUITheurgiaTextLayout : uint8 {
    PLAYER_NAME_CHANGE_POS,
    CHARA_NAME,
    CHARA_NAME_POS_OFFSET,
    THEURGIA_NAME,
    THEURGIA_HELP,
    RISE_TREND,
    CHARACTERISTIC_NAME,
    CHARACTERISTIC_HELP,
    Max,
};

