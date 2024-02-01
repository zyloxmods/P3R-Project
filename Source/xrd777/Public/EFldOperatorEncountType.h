#pragma once
#include "CoreMinimal.h"
#include "EFldOperatorEncountType.generated.h"

UENUM()
enum class EFldOperatorEncountType : int32 {
    None,
    Normal,
    Chance,
    Assault,
    AssaultChance,
    Pinch,
};

