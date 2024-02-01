#pragma once
#include "CoreMinimal.h"
#include "ECldTimeZone.generated.h"

UENUM(BlueprintType)
enum class ECldTimeZone : uint8 {
    None,
    EarlyMorning,
    Morning,
    AM,
    Noon,
    PM,
    AfterSchool,
    Night,
    Shadow,
    Midnight,
    TimeMax,
};

