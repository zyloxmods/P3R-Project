#pragma once
#include "CoreMinimal.h"
#include "EEvtCharaOperationFootStepLabelType.generated.h"

UENUM(BlueprintType)
enum class EEvtCharaOperationFootStepLabelType : uint8 {
    Dynamic,
    Carpet,
    Concrete,
};

