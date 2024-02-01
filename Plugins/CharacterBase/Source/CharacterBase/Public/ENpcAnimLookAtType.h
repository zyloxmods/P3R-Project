#pragma once
#include "CoreMinimal.h"
#include "ENpcAnimLookAtType.generated.h"

UENUM(BlueprintType)
enum class ENpcAnimLookAtType : uint8 {
    Disable,
    World,
    TargetActor,
    TargetActorFIELD,
};

