#pragma once
#include "CoreMinimal.h"
#include "EEncountType.generated.h"

UENUM(BlueprintType)
enum class EEncountType : uint8 {
    Blank,
    Normal,
    Chance,
    Pinch,
    Friend,
    Num,
};

