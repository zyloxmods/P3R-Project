#pragma once
#include "CoreMinimal.h"
#include "EAtlUIFontStyle.generated.h"

UENUM(BlueprintType)
enum class EAtlUIFontStyle : uint8 {
    UI_FONT_STYLE_NORMAL_SMALL,
    UI_FONT_STYLE_NORMAL_MEDIUM,
    UI_FONT_STYLE_NORMAL_LARGE,
    UI_FONT_STYLE_NORMAL_SSMALL,
    UI_FONT_STYLE_NORMAL_MAX UMETA(Hidden),
};

