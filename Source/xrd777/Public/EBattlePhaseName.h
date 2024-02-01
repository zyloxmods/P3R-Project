#pragma once
#include "CoreMinimal.h"
#include "EBattlePhaseName.generated.h"

UENUM(BlueprintType)
enum class EBattlePhaseName : uint8 {
    Fighting,
    Dead,
    Escape,
    SerialEncount,
    Result,
    Victory,
    None,
};

