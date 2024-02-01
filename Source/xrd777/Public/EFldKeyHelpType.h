#pragma once
#include "CoreMinimal.h"
#include "EFldKeyHelpType.generated.h"

UENUM(BlueprintType)
enum class EFldKeyHelpType : uint8 {
    Common,
    Daily,
    Dungeon,
    Max,
};

