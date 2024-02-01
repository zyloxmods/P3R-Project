#pragma once
#include "CoreMinimal.h"
#include "EAddContentEntitlementCategory.generated.h"

UENUM(BlueprintType)
enum class EAddContentEntitlementCategory : uint8 {
    Blank,
    Bundle,
    Unlock,
    Entitlement,
};

