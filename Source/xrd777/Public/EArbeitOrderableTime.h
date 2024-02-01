#pragma once
#include "CoreMinimal.h"
#include "EArbeitOrderableTime.generated.h"

UENUM(BlueprintType)
enum class EArbeitOrderableTime : uint8 {
    Afternoon,
    Evening,
    AllTime,
};

