#pragma once
#include "CoreMinimal.h"
#include "EHandwritingSpawnRules.generated.h"

UENUM(BlueprintType)
enum class EHandwritingSpawnRules : uint8 {
    SpawnWorldLocation,
    AttachToSpawner,
};

