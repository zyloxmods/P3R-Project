#pragma once
#include "CoreMinimal.h"
#include "EDungeonEffectType.generated.h"

UENUM(BlueprintType)
enum class EDungeonEffectType : uint8 {
    Dark,
    HeroAttack,
    EnemyAttack,
    TartarosSearch,
    Num,
};

