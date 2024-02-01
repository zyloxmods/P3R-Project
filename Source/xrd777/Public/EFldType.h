#pragma once
#include "CoreMinimal.h"
#include "EFldType.generated.h"

UENUM(BlueprintType)
enum class EFldType : uint8
{
    DailyField,
    DungeonField,
    Max,
};

