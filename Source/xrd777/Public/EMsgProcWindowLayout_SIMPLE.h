#pragma once
#include "CoreMinimal.h"
#include "EMsgProcWindowLayout_SIMPLE.generated.h"

UENUM(BlueprintType)
enum class EMsgProcWindowLayout_SIMPLE : uint8 {
    MSG_TEXT_COL,
    MSG_OFFSET,
    MSG_ROW,
    Max,
};

