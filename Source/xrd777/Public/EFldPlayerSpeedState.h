#pragma once
#include "CoreMinimal.h"
#include "EFldPlayerSpeedState.generated.h"

UENUM(BlueprintType)
enum class EFldPlayerSpeedState : uint8 {
    None,
    Walk,
    Run,
    Dash,
    Assault,
};

