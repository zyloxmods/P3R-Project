#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtLocomotionTeleportVelocityType.generated.h"

UENUM(BlueprintType)
enum class EAtlEvtLocomotionTeleportVelocityType : uint8 {
    Default,
    Clamp,
    Constant,
    Keep,
};

