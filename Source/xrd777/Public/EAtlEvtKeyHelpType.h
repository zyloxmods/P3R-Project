#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtKeyHelpType.generated.h"

UENUM(BlueprintType)
enum class EAtlEvtKeyHelpType : uint8 {
    Normal,
    AEvent,
    Answer,
    BackLog,
    Disable_Log,
    Max,
};

