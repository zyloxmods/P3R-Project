#pragma once
#include "CoreMinimal.h"
#include "EBtlFinishResult.generated.h"

UENUM(BlueprintType)
enum class EBtlFinishResult : uint8 {
    None,
    Win,
    Lose,
    Escape,
    Roundup,
    Trafuli,
    EneEscape,
};

