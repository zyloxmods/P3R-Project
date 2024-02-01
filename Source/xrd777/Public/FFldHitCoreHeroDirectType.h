#pragma once
#include "CoreMinimal.h"
#include "FFldHitCoreHeroDirectType.generated.h"

UENUM(BlueprintType)
enum class FFldHitCoreHeroDirectType : uint8 {
    None,
    Center,
    Front,
    Back,
    Left,
    Right,
    BackNG,
    Max,
};

