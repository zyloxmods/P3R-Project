#pragma once
#include "CoreMinimal.h"
#include "EMailCategory.generated.h"

UENUM(BlueprintType)
enum class EMailCategory : uint8 {
    Community,
    DeepEpisode,
    Facility,
    Common,
    Max,
};

