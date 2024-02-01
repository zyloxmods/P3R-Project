#pragma once
#include "CoreMinimal.h"
#include "EQuestRequestType.generated.h"

UENUM(BlueprintType)
enum class EQuestRequestType : uint8 {
    Event,
    Item,
    Persona,
    Counter,
};

