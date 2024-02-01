#pragma once
#include "CoreMinimal.h"
#include "ECldSceneChangeType.generated.h"

UENUM(BlueprintType)
enum class ECldSceneChangeType : uint8 {
    None,
    TimeChange,
    DayChange,
};

