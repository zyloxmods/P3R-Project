#pragma once
#include "CoreMinimal.h"
#include "EMobWalkStartState.generated.h"

UENUM(BlueprintType)
enum class EMobWalkStartState : uint8 {
    Start,
    ReStart,
    Run,
};

