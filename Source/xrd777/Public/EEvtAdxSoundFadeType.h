#pragma once
#include "CoreMinimal.h"
#include "EEvtAdxSoundFadeType.generated.h"

UENUM(BlueprintType)
enum class EEvtAdxSoundFadeType : uint8 {
    FADE_IN,
    FADE_OUT,
    STOP_BGM,
};

