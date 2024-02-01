#pragma once
#include "CoreMinimal.h"
#include "TUTRIAL_SCENE.generated.h"

UENUM(BlueprintType)
enum class TUTRIAL_SCENE : uint8 {
    FADE_IN,
    DRAWING,
    FADE_OUT,
    SCENE_MAX UMETA(Hidden),
    TUTRIAL_MAX UMETA(Hidden),
};

