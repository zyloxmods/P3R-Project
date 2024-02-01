#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtSublevelType.generated.h"

UENUM(BlueprintType)
enum class EAtlEvtSublevelType : uint8 {
    Unknown,
    Background,
    LightScenario,
    Sound,
    Season,
    Crowd,
    EventSublevel,
};

