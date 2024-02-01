#pragma once
#include "CoreMinimal.h"
#include "EBtlShuffleCardAllGetBonusAnimeState.generated.h"

UENUM(BlueprintType)
enum class EBtlShuffleCardAllGetBonusAnimeState : uint8 {
    BTL_SHUFFLECARD_BONUSANIME_OUTSMALLTAROT,
    BTL_SHUFFLECARD_BONUSANIME_IN,
    BTL_SHUFFLECARD_BONUSANIME_TRANSE,
    BTL_SHUFFLECARD_BONUSANIME_OUT,
    BTL_SHUFFLECARD_BONUSANIME_FINISH,
    BTL_SHUFFLECARD_BONUSANIME_MAX UMETA(Hidden),
};

