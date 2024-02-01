#pragma once
#include "CoreMinimal.h"
#include "EBtlShuffleCardState.generated.h"

UENUM(BlueprintType)
enum class EBtlShuffleCardState : uint8 {
    BTL_SHUFFLECARD_WAIT,
    BTL_SHUFFLECARD_SELECT,
    BTL_SHUFFLECARD_MOVE,
    BTL_SHUFFLECARD_DISSOLVE,
    BTL_SHUFFLECARD_MAX UMETA(Hidden),
};

