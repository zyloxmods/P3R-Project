#pragma once
#include "CoreMinimal.h"
#include "ANIMFADEALPHA_RN.generated.h"

UENUM(BlueprintType)
enum class ANIMFADEALPHA_RN : uint8 {
    BLACKBOARD_ALPHA,
    BLUEBOARD_ALPHA,
    GRADATION_ALPHA,
    SCROLLBAR_ALPHA,
    MAINTEXT_ALPHA,
    FADE_ALPHA_MAX UMETA(Hidden),
    ANIMFADEALPHA_MAX UMETA(Hidden),
};

