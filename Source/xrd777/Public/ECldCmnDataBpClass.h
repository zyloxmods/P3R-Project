#pragma once
#include "CoreMinimal.h"
#include "ECldCmnDataBpClass.generated.h"

UENUM(BlueprintType)
enum class ECldCmnDataBpClass : uint8 {
    SchedulerEveryDay,
    SchedulerEveryTime,
    Max,
};

