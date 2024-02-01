#pragma once
#include "CoreMinimal.h"
#include "EBtlAlloutAttackResult.generated.h"

UENUM(BlueprintType)
enum class EBtlAlloutAttackResult : uint8 {
    Blank,
    Annihilation,
    DefeatAtLeastOne,
    DefeatNone,
};

