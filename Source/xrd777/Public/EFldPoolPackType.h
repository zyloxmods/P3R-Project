#pragma once
#include "CoreMinimal.h"
#include "EFldPoolPackType.generated.h"

UENUM(BlueprintType)
enum class EFldPoolPackType : uint8 {
    Common,
    Daily,
    Dungeon_01,
    Dungeon_02,
    Max,
};

