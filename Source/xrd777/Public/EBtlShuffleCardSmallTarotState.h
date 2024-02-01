#pragma once
#include "CoreMinimal.h"
#include "EBtlShuffleCardSmallTarotState.generated.h"

UENUM(BlueprintType)
enum class EBtlShuffleCardSmallTarotState : uint8 {
    BTL_SHUFFLECARD_TAROTCARD_NORMAL,
    BTL_SHUFFLECARD_TAROTCARD_ALLGETBONUS_ANIME,
    BTL_SHUFFLECARD_TAROTCARD_INVISIBLE,
    BTL_SHUFFLECARD_TAROTCARD_MAX UMETA(Hidden),
};

