#pragma once
#include "CoreMinimal.h"
#include "ECldWeek.generated.h"

UENUM(BlueprintType)
enum class ECldWeek : uint8 {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    WeekMax,
};

