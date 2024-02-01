#pragma once
#include "CoreMinimal.h"
#include "EUIGAUSS_TYPE.generated.h"

UENUM(BlueprintType)
enum class EUIGAUSS_TYPE : uint8 {
    EUI_Defult_Value,
    UI_OT_GAUSS_VERY_WEAK = 0x0,
    UI_OT_GAUSS_WEAK,
    UI_OT_GAUSS_NORMAL,
    UI_OT_GAUSS_STRONG,
    UI_OT_GAUSS_VERY_STRONG,
    UI_OT_GAUSSTEX_MOST_WEAK,
    EUIGAUSS_MAX UMETA(Hidden),
};

