#pragma once
#include "CoreMinimal.h"
#include "EEventManagerMessageState.generated.h"

UENUM(BlueprintType)
enum class EEventManagerMessageState : uint8 {
    Invalid,
    RunningMessage,
    EndMessage,
    RunningSelect,
    EndSelect,
    Finished,
};

