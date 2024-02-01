#pragma once
#include "CoreMinimal.h"
#include "EBtlShakeType.generated.h"

UENUM(BlueprintType)
enum class EBtlShakeType : uint8 {
    BTL_SHAKE_NORMAL,
    BTL_SHAKE_NORMAL_STRONG,
    BTL_SHAKE_SINGLE_SHORT,
    BTL_SHAKE_SINGLE_SHORT_STRONG,
    BTL_SHAKE_SINGLE_LONG,
    BTL_SHAKE_SINGLE_LONG_STRONG,
    BTL_SHAKE_MAX UMETA(Hidden),
};

