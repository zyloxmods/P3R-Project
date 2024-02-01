#pragma once
#include "CoreMinimal.h"
#include "EDungeonBattleRetType.generated.h"

UENUM(BlueprintType)
enum class EDungeonBattleRetType : uint8 {
    None,
    Win,
    Lose,
    Escape,
    Roundup,
    Trafuli,
    EneEscape,
    Max,
};

