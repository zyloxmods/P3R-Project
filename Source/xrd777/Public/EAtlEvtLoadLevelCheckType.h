#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtLoadLevelCheckType.generated.h"

UENUM(BlueprintType)
enum class EAtlEvtLoadLevelCheckType : uint8 {
    FieldMain,
    FieldSound,
    FieldSeason,
    LightScenario,
    EventMain,
};

