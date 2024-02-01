#pragma once
#include "CoreMinimal.h"
#include "EFldPartnerState.generated.h"

UENUM()
enum class EFldPartnerState : int32 {
    None,
    Standby,
    EndBattle,
    Execution,
};

