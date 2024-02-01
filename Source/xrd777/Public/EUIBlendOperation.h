#pragma once
#include "CoreMinimal.h"
#include "EUIBlendOperation.generated.h"

UENUM(BlueprintType)
enum class EUIBlendOperation : uint8 {
    EUI_Defult_Value,
    UI_BO_Add = 0x0,
    UI_BO_Subtract,
    UI_BO_Min,
    UI_BO_Max,
    UI_BO_ReverseSubtract,
    UI_EBlendOperation_Num,
    UI_EBlendOperation_NumBits = 0x3,
    EUIBlendOperation_MAX = 0x6,
};

