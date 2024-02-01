#pragma once
#include "CoreMinimal.h"
#include "ESubLevelIndex.generated.h"

UENUM(BlueprintType)
enum class ESubLevelIndex : uint8 {
    TITLE,
    Battle,
    Field,
    BC_Event,
    A_Event,
    Dungeon,
    UI_Weapon,
    UI_Conbine,
    SubLevelIndexMAX,
};

