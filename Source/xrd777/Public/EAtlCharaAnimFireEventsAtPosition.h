#pragma once
#include "CoreMinimal.h"
#include "EAtlCharaAnimFireEventsAtPosition.generated.h"

UENUM(BlueprintType)
enum class EAtlCharaAnimFireEventsAtPosition : uint8 {
    AtStartOfEvaluation,
    AtEndOfEvaluation,
    AfterSpawn,
};

