#pragma once
#include "CoreMinimal.h"
#include "EBtlShuffleCardRotationState.generated.h"

UENUM(BlueprintType)
enum class EBtlShuffleCardRotationState : uint8 {
    BTL_SHUFFLECARD_ROTATION_WAIT,
    BTL_SHUFFLECARD_ROTATION_PLAYING,
    BTL_SHUFFLECARD_ROTATION_END,
    BTL_SHUFFLECARD_ROTATION_MAX UMETA(Hidden),
};

