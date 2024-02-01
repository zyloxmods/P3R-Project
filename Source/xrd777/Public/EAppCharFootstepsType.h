#pragma once
#include "CoreMinimal.h"
#include "EAppCharFootstepsType.generated.h"

UENUM(BlueprintType)
enum class EAppCharFootstepsType : uint8 {
    None,
    Walk,
    Run,
};

