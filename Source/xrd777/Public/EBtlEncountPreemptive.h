#pragma once
#include "CoreMinimal.h"
#include "EBtlEncountPreemptive.generated.h"

UENUM(BlueprintType)
enum class EBtlEncountPreemptive : uint8 {
    Normal,
    Enemy,
    Ally,
    MAX,
};

