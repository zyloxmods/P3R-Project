#pragma once
#include "CoreMinimal.h"
#include "FADE_MOVE.generated.h"

UENUM(BlueprintType)
enum class FADE_MOVE : uint8 {
    BASE_MOVE_POSX,
    THUM_MOVE_POSX,
    THUM_MOVE_POSY,
    THUM_ANGLE,
    FADE_MAX UMETA(Hidden),
};

