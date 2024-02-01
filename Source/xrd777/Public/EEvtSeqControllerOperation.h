#pragma once
#include "CoreMinimal.h"
#include "EEvtSeqControllerOperation.generated.h"

UENUM(BlueprintType)
enum class EEvtSeqControllerOperation : uint8 {
    Invalid,
    WaitingMessage,
    FinishSequencer,
    PlayAndJumpToSec,
    Pause,
    ViewFieldCamera,
    ViewSequencerCamera,
    TransitionLightScenarioSublevel,
    WaitTransitionLightScenarioSublevel,
};

