#pragma once
#include "CoreMinimal.h"
#include "EDungeonTBoxType.generated.h"

UENUM(BlueprintType)
enum class EDungeonTBoxType : uint8 {
    Normal,
    Rare,
    Jewelry,
    PrimField,
    Medal1,
    Medal2,
    Medal3,
    Medal4,
    Medal5,
    Medal6,
    Num,
    UseNum = 0x7,
    EDungeonTBoxType_MAX = 0xB,
};

