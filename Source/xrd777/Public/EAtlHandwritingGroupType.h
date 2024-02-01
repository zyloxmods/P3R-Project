#pragma once
#include "CoreMinimal.h"
#include "EAtlHandwritingGroupType.generated.h"

UENUM(BlueprintType)
enum class EAtlHandwritingGroupType : uint8 {
    Default,
    Field,
    Event,
};

