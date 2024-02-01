#pragma once
#include "CoreMinimal.h"
#include "EDungeonLevelPathType.generated.h"

UENUM(BlueprintType)
enum class EDungeonLevelPathType : uint8 {
    Blank,
    Floor,
    Environment,
    NavMesh,
};

