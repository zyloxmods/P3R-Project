#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiPromise.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiPromise : uint8 {
    BTL_PROMISE_NORMAL,
    BTL_PROMISE_GUARD,
    BTL_PROMISE_SOUKOUGEKI,
    BTL_PROMISE_MAX UMETA(Hidden),
};

