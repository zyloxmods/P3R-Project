#pragma once
#include "CoreMinimal.h"
#include "EEvtCharaAnimationLookAtType.generated.h"

UENUM(BlueprintType)
enum class EEvtCharaAnimationLookAtType : uint8 {
    Disable,
    World,
    TargetActor,
    TargetActorFIELD,
};

