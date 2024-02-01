#pragma once
#include "CoreMinimal.h"
#include "EEvtCharaHandwritingSpawnOwnerType.generated.h"

UENUM(BlueprintType)
enum class EEvtCharaHandwritingSpawnOwnerType : uint8 {
    CharacterDefault,
    Character,
    SpawnerDirectRequest,
};

