#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtEventCategoryType.generated.h"

UENUM(BlueprintType)
enum class EAtlEvtEventCategoryType : uint8 {
    MAIN,
    CMMU,
    QEST,
    EXTR,
    FILD,
};

