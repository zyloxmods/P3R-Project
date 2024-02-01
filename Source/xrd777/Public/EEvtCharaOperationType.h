#pragma once
#include "CoreMinimal.h"
#include "EEvtCharaOperationType.generated.h"

UENUM(BlueprintType)
enum class EEvtCharaOperationType : uint8 {
    Invalid,
    OverwriteFootStepLabel,
};

