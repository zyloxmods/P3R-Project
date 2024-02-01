#pragma once
#include "CoreMinimal.h"
#include "EAtlUIPrimitivePreset.generated.h"

UENUM(BlueprintType)
enum class EAtlUIPrimitivePreset : uint8 {
    UI_PRIM_FREE,
    UI_PRIM_TRIANGLE,
    UI_PRIM_SQUARE,
    UI_PRIM_ROUND_SQUARE,
    UI_PRIM_CIRCLE,
    UI_PRIM_MAX UMETA(Hidden),
};

