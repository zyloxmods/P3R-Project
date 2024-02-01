#pragma once
#include "CoreMinimal.h"
#include "EDungeonObjHitEvent.generated.h"

UENUM(BlueprintType)
enum class EDungeonObjHitEvent : uint8 {
    In,
    Out,
    Action,
};

