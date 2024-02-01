#pragma once
#include "CoreMinimal.h"
#include "EFireEventsAtPositionggg.generated.h"

UENUM(BlueprintType)
enum class EFireEventsAtPositionggg : uint8 {
    AtStartOfEvaluation,
    AtEndOfEvaluation,
    AfterSpawn,
};

