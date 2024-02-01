#pragma once
#include "CoreMinimal.h"
#include "ECldDateMsgPeriod.generated.h"

UENUM(BlueprintType)
enum class ECldDateMsgPeriod : uint8 {
    Single,
    Start,
    Mid,
    End,
};

