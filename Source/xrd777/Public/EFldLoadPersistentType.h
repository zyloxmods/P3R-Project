#pragma once
#include "CoreMinimal.h"
#include "EFldLoadPersistentType.generated.h"

UENUM(BlueprintType)
enum class EFldLoadPersistentType : uint8 {
    Daily,
    Dungeon,
    Max,
};

