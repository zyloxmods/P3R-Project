#pragma once
#include "CoreMinimal.h"
#include "ASSETDATATYPE.generated.h"

UENUM(BlueprintType)
enum class ASSETDATATYPE : uint8 {
    BackLogType,
    FieldDayType,
    DayTypeMax,
};

