#pragma once
#include "CoreMinimal.h"
#include "EPERSONA_STATUS_DRAW_SCENE.generated.h"

UENUM(BlueprintType)
enum class EPERSONA_STATUS_DRAW_SCENE : uint8 {
    NONE,
    LIST,
    MAIN,
    LEVEL_UP,
    PARAMETER_UP,
    COMBINE,
    DRAWER,
    REGISTRY,
    SKILL_CARD,
    EPERSONA_STATUS_DRAW_MAX UMETA(Hidden),
};

