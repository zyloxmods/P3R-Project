#pragma once
#include "CoreMinimal.h"
#include "EFldShortcutResult.generated.h"

UENUM(BlueprintType)
enum class EFldShortcutResult : uint8 {
    Success,
    Failed,
    TownMap,
    NowField,
};

