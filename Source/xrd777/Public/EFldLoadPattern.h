#pragma once
#include "CoreMinimal.h"
#include "EFldLoadPattern.generated.h"

UENUM(BlueprintType)
enum class EFldLoadPattern : uint8 {
    All,
    BgOnly,
    BgMob,
    BgHit,
    BgNpc,
    BgCmm,
    KeyFreeEvent,
    Dungeon,
    Load,
    ExceptEnv,
    TimeChanged,
    Max,
};

