#pragma once
#include "CoreMinimal.h"
#include "EEvtAdxTrackSoundOperationType.generated.h"

UENUM(BlueprintType)
enum class EEvtAdxTrackSoundOperationType : uint8 {
    Play,
    Stop,
    Invalid,
};

