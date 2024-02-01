#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtPlayMode.generated.h"

UENUM(BlueprintType)
enum class EAtlEvtPlayMode : uint8 {
    PlayingGameMode,
    EventEditHelperMode,
};

