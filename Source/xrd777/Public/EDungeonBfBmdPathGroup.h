#pragma once
#include "CoreMinimal.h"
#include "EDungeonBfBmdPathGroup.generated.h"

UENUM(BlueprintType)
enum class EDungeonBfBmdPathGroup : uint8 {
    BattleEnd,
    FloorPreLoad,
    Hit,
    SupportTalk,
    Debug,
    Num,
};

