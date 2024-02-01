#pragma once
#include "CoreMinimal.h"
#include "ELayoutDirType.generated.h"

UENUM(BlueprintType)
enum class ELayoutDirType : uint8 {
    Up,
    Left,
    Down,
    Right,
};

