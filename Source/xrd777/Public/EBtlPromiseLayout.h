#pragma once
#include "CoreMinimal.h"
#include "EBtlPromiseLayout.generated.h"

UENUM(BlueprintType)
enum class EBtlPromiseLayout : uint8 {
    COMMAND_GO_MARU,
    COMMAND_GO_BATSU,
    COMMAND_CANCEL_MARU,
    COMMAND_CANCEL_BATSU,
    Max,
};

