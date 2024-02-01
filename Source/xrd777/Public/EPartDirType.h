#pragma once
#include "CoreMinimal.h"
#include "EPartDirType.generated.h"

UENUM(BlueprintType)
enum class EPartDirType : uint8 {
    Up,
    Right,
    Down,
    Left,
};

