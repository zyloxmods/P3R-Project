#pragma once
#include "CoreMinimal.h"
#include "EAppPauseType.generated.h"

UENUM(BlueprintType)
enum class EAppPauseType : uint8 {
    None,
    Camp,
    TownMap,
    DialogueLog,
    PauseEventA,
    Max,
};

