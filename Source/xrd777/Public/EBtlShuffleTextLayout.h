#pragma once
#include "CoreMinimal.h"
#include "EBtlShuffleTextLayout.generated.h"

UENUM(BlueprintType)
enum class EBtlShuffleTextLayout : uint8 {
    CARD_NAME,
    CARD_NAME_POS,
    CARD_HELP,
    CARD_HELP_POS,
    PERSONA_NAME,
    Max,
};

