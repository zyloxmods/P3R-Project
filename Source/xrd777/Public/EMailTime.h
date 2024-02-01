#pragma once
#include "CoreMinimal.h"
#include "EMailTime.generated.h"

UENUM(BlueprintType)
enum class EMailTime : uint8 {
    Morning,
    Noon,
    Night,
};

