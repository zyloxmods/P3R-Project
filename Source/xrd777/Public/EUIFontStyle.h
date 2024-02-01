#pragma once
#include "CoreMinimal.h"
#include "EUIFontStyle.generated.h"

UENUM(BlueprintType)
enum class EUIFontStyle : uint8 {
    EUI_Defult_Value,
    UI_FONT_STYLE_NORMAL_SSMALL = 0x3,
    UI_FONT_STYLE_NORMAL_SMALL = 0x0,
    UI_FONT_STYLE_NORMAL_MEDIUM,
    UI_FONT_STYLE_NORMAL_LARGE,
    EUIFontStyle_MAX = 0x4,
};

