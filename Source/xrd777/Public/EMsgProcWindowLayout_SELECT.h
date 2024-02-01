#pragma once
#include "CoreMinimal.h"
#include "EMsgProcWindowLayout_SELECT.generated.h"

UENUM(BlueprintType)
enum class EMsgProcWindowLayout_SELECT : uint8 {
    SELECT_TEXT_COL,
    NON_SELECT_TEXT_COL,
    SELECT_TEXT_OFFSET,
    NON_SELECT_TEXT_OFFSET,
    Max,
};

