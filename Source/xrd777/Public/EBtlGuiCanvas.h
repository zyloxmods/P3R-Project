#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiCanvas.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiCanvas : uint8 {
    BTL_CANVAS_NULL,
    BTL_CANVAS_0,
    BTL_CANVAS_1,
    BTL_CANVAS_2,
    BTL_CANVAS_3,
    BTL_CANVAS_4,
    BTL_CANVAS_5,
    BTL_CANVAS_6,
    BTL_CANVAS_7,
    BTL_CANVAS_CAP,
    BTL_CANVAS_MAX UMETA(Hidden),
};

