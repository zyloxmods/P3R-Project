#pragma once
#include "CoreMinimal.h"
#include "EAppLevelType.generated.h"

UENUM(BlueprintType)
enum class EAppLevelType : uint8 {
    Normal,
    Resident,
    PreLoad,
};

