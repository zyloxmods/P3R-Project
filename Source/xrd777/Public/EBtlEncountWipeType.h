#pragma once
#include "CoreMinimal.h"
#include "EBtlEncountWipeType.generated.h"

UENUM(BlueprintType)
enum class EBtlEncountWipeType : uint8 {
    BTL_ENCWIPE_NONE,
    BTL_ENCWIPE_NORMAL,
    BTL_ENCWIPE_PINCH,
    BTL_ENCWIPE_EVENT,
    BTL_ENCWIPE_MAX UMETA(Hidden),
};

