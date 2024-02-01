#pragma once
#include "CoreMinimal.h"
#include "EAnimPackID.generated.h"

UENUM(BlueprintType)
enum class EAnimPackID : uint8 {
    None,
    Common,
    Dungeon,
    Combine,
    Event,
};

