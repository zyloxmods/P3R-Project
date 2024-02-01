#pragma once
#include "CoreMinimal.h"
#include "EEvtConditionalBranchType.generated.h"

UENUM(BlueprintType)
enum class EEvtConditionalBranchType : uint8 {
    AlwaysExecute,
    DoNotExecute,
    RefFromLocal,
    RefFromGlobalFlag,
    RefFromGlobalCounter,
};

