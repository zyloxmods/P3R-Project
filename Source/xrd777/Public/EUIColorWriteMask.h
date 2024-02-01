#pragma once
#include "CoreMinimal.h"
#include "EUIColorWriteMask.generated.h"

UENUM(BlueprintType)
enum class EUIColorWriteMask : uint8 {
    EUI_Defult_Value,
    UI_CW_RED,
    UI_CW_GREEN,
    UI_CW_BLUE = 0x4,
    UI_CW_ALPHA = 0x8,
    UI_CW_NONE = 0x0,
    UI_CW_RGB = 0x7,
    UI_CW_RGBA = 0xF,
    UI_CW_RG = 0x3,
    UI_CW_BA = 0xC,
    UI_EColorWriteMask_NumBits = 0x4,
    EUIColorWriteMask_MAX = 0x10,
};

