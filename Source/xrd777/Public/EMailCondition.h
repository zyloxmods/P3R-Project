#pragma once
#include "CoreMinimal.h"
#include "EMailCondition.generated.h"

UENUM(BlueprintType)
enum class EMailCondition : uint8 {
    Equal,
    NotEqual,
    Greater,
    EGreater,
    Less,
    ELess,
};

