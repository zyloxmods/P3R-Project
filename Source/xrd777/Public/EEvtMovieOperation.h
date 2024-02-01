#pragma once
#include "CoreMinimal.h"
#include "EEvtMovieOperation.generated.h"

UENUM(BlueprintType)
enum class EEvtMovieOperation : uint8 {
    Play,
    Pause,
    Resume,
};

