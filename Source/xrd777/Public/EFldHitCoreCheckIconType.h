#pragma once
#include "CoreMinimal.h"
#include "EFldHitCoreCheckIconType.generated.h"

UENUM(BlueprintType)
enum class EFldHitCoreCheckIconType : uint8 {
    Check,
    Speak,
    Listen,
    Goto,
    Action,
    Shop,
    None,
    Max,
};

