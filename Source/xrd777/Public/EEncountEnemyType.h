#pragma once
#include "CoreMinimal.h"
#include "EEncountEnemyType.generated.h"

UENUM(BlueprintType)
enum class EEncountEnemyType : uint8 {
    Blank,
    Normal,
    Strong,
    Rare,
    Death,
    Num,
};

