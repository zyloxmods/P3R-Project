#pragma once
#include "CoreMinimal.h"
#include "EBtlCutsceneBlendType.generated.h"

UENUM(BlueprintType)
enum class EBtlCutsceneBlendType : uint8 {
    Liner,
    Cubic,
    EaseIN,
    EaseOut,
    EaseInOut,
};

