#pragma once
#include "CoreMinimal.h"
#include "EAppCharAnimCategoryType.generated.h"

UENUM(BlueprintType)
enum class EAppCharAnimCategoryType : uint8 {
    Common,
    Battle,
    EventBC,
    Field,
    Dungeon,
};

