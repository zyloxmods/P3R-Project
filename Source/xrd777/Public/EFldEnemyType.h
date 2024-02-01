#pragma once
#include "CoreMinimal.h"
#include "EFldEnemyType.generated.h"

UENUM(BlueprintType)
enum class EFldEnemyType : uint8 {
    Normal,
    Strong,
    Rare,
    Death,
    Gatekeeper,
    ForbiddenDoor,
};

