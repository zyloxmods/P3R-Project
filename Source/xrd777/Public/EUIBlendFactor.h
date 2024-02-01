#pragma once
#include "CoreMinimal.h"
#include "EUIBlendFactor.generated.h"

UENUM(BlueprintType)
enum class EUIBlendFactor : uint8 {
    EUI_Defult_Value,
    UI_BF_Zero = 0x0,
    UI_BF_One,
    UI_BF_SourceColor,
    UI_BF_InverseSourceColor,
    UI_BF_SourceAlpha,
    UI_BF_InverseSourceAlpha,
    UI_BF_DestAlpha,
    UI_BF_InverseDestAlpha,
    UI_BF_DestColor,
    UI_BF_InverseDestColor,
    UI_BF_ConstantBlendFactor,
    UI_BF_InverseConstantBlendFactor,
    UI_BF_Source1Color,
    UI_BF_InverseSource1Color,
    UI_BF_Source1Alpha,
    UI_BF_InverseSource1Alpha,
    UI_EBlendFactor_Num,
    UI_EBlendFactor_NumBits = 0x4,
    EUIBlendFactor_MAX = 0x11,
};

