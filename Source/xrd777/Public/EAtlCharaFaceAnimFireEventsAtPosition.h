#pragma once
#include "CoreMinimal.h"
#include "EAtlCharaFaceAnimFireEventsAtPosition.generated.h"

UENUM(BlueprintType)
enum class EAtlCharaFaceAnimFireEventsAtPosition : uint8 {
    AtStartOfEvaluation,
    AtEndOfEvaluation,
    AfterSpawn,
};

