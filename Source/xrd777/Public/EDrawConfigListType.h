#pragma once
#include "CoreMinimal.h"
#include "EDrawConfigListType.generated.h"

UENUM(BlueprintType)
enum class EDrawConfigListType : uint8 {
    NONE,
    BUTTON,
    SOUNT_OUTPUT,
    GRAPHIC_QUALITY,
    RENDERING_SCALE,
    SHADOW_QUALITY,
    FRAMELATE,
    RESOLUTION,
    SCREEN_MODE,
    MONITOR,
    KEY_CONFIG,
};

