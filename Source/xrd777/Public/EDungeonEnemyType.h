#pragma once
#include "CoreMinimal.h"
#include "EDungeonEnemyType.generated.h"

UENUM(BlueprintType)
enum class EDungeonEnemyType : uint8 {
    Normal,
    Strong,
    Rare,
    Death,
    Gatekeeper,
    Num,
};

