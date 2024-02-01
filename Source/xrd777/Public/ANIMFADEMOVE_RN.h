#pragma once
#include "CoreMinimal.h"
#include "ANIMFADEMOVE_RN.generated.h"

UENUM(BlueprintType)
enum class ANIMFADEMOVE_RN : uint8 {
    BLACKBOARD_POS,
    BLUEBOARD_POS,
    BLUEBOARD_ROLL,
    SCROLLBAR_POS,
    MAINTEX_POS,
    FADE_MOVE_MAX UMETA(Hidden),
    ANIMFADEMOVE_MAX UMETA(Hidden),
};

