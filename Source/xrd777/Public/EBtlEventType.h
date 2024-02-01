#pragma once
#include "CoreMinimal.h"
#include "EBtlEventType.generated.h"

UENUM(BlueprintType)
enum class EBtlEventType : uint8 {
    ENCOUNT,
    BTLSTART,
    AISTART,
    ACTSTART,
    ACTEND,
    BTLEND,
    TALK,
    TALK02,
    EVENT0,
    EVENT1,
    EVENT2,
    EVENT3,
    EVENT4,
    EVENT5,
    MAX,
};

