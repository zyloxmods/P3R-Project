#pragma once
#include "CoreMinimal.h"
#include "EVoiceActionTime.generated.h"

UENUM(BlueprintType)
enum class EVoiceActionTime : uint8 {
    Auto,
    Daytime,
    Night,
};

