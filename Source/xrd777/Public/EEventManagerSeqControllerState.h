#pragma once
#include "CoreMinimal.h"
#include "EEventManagerSeqControllerState.generated.h"

UENUM(BlueprintType)
enum class EEventManagerSeqControllerState : uint8 {
    Idle,
    BeginWaitFinishedMessage,
    WaitingFinishedMessage,
    EndWaitFinishedMessage,
};

