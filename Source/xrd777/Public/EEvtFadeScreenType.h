#pragma once
#include "CoreMinimal.h"
#include "EEvtFadeScreenType.generated.h"

UENUM(BlueprintType)
enum class EEvtFadeScreenType : uint8 {
    EVT_FADESCREEN_FADE_IN,
    EVT_FADESCREEN_FADE_OUT,
    EVT_FADESCREEN_CROSSFADE_IN,
    EVT_FADESCREEN_CROSSFADE_OUT,
    EVT_FADESCREEN_MAX UMETA(Hidden),
};

