#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtPlayLoadSublevelType.generated.h"

UENUM(BlueprintType)
enum class EAtlEvtPlayLoadSublevelType : uint8 {
    Custom,
    BindActorSublevel,
    CallEvent,
    EvtPlay,
    EventEditHelper,
};

