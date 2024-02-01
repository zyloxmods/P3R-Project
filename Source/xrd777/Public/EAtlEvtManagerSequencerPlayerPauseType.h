#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtManagerSequencerPlayerPauseType.generated.h"

UENUM(BlueprintType)
enum class EAtlEvtManagerSequencerPlayerPauseType : uint8 {
    NoPause,
    MessagePause,
    GamePause,
};

