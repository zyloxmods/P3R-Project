#pragma once
#include "CoreMinimal.h"
#include "EBtlRelocationType.generated.h"

UENUM(BlueprintType)
enum class EBtlRelocationType : uint8 {
    Normal,
    Command,
    Closed,
    Encount,
    WholeForEnchanterBackshot,
};

