#pragma once
#include "CoreMinimal.h"
#include "EGWorkSeqType.generated.h"

UENUM(BlueprintType)
enum class EGWorkSeqType : uint8 {
    Battle,
    Field,
    Event,
    KeyFreeEvent,
};

