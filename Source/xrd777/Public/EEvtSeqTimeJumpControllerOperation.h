#pragma once
#include "CoreMinimal.h"
#include "EEvtSeqTimeJumpControllerOperation.generated.h"

UENUM(BlueprintType)
enum class EEvtSeqTimeJumpControllerOperation : uint8 {
    TimeJump,
    TimeJumpMarker,
    Invalid,
    SkipAndTimeJump,
};

