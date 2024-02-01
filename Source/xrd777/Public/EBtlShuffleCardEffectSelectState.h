#pragma once
#include "CoreMinimal.h"
#include "EBtlShuffleCardEffectSelectState.generated.h"

UENUM(BlueprintType)
enum class EBtlShuffleCardEffectSelectState : uint8 {
    BTL_SHUFFLECARD_EFFECTSELECT_WAIT,
    BTL_SHUFFLECARD_EFFECTSELECT_OUT,
    BTL_SHUFFLECARD_EFFECTSELECT_IN,
    BTL_SHUFFLECARD_EFFECTSELECT_MAX UMETA(Hidden),
};

