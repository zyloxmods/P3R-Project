#pragma once
#include "CoreMinimal.h"
#include "EEvtConditionalBranchCompType.generated.h"

UENUM(BlueprintType)
enum class EEvtConditionalBranchCompType : uint8 {
    Equal,
    Not,
    LessThan,
    GreaterThan,
    Less,
    Greater,
};

