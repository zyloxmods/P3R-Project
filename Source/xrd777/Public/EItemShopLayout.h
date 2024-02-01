#pragma once
#include "CoreMinimal.h"
#include "EItemShopLayout.generated.h"

UENUM(BlueprintType)
enum class EItemShopLayout : uint8 {
    ITEM_DETAIL_POS,
    ITEM_DETAIL_ROW,
    Max,
};

