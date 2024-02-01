#pragma once
#include "CoreMinimal.h"
#include "EEvtCharaAnimationType.generated.h"

UENUM(BlueprintType)
enum class EEvtCharaAnimationType : uint8 {
    SimpleMontage,
    LoopAnimationSingle,
    LoopAnimationOnLastFrame,
    StopSlotAnimation,
    LoopAnimationSingleWithStartOffset,
    KeepWorld,
};

