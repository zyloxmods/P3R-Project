#pragma once
#include "CoreMinimal.h"
#include "EUI_DRAW_POINT.generated.h"

UENUM(BlueprintType)
enum class EUI_DRAW_POINT : uint8 {
    UI_DRAW_LEFT_TOP,
    UI_DRAW_LEFT_CENTER,
    UI_DRAW_LEFT_BOTTOM,
    UI_DRAW_CENTER_TOP,
    UI_DRAW_CENTER_CENTER,
    UI_DRAW_CENTER_BOTTOM,
    UI_DRAW_RIGHT_TOP,
    UI_DRAW_RIGHT_CENTER,
    UI_DRAW_RIGHT_BOTTOM,
    UI_DRAW_MAX UMETA(Hidden),
};

