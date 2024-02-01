#pragma once
#include "CoreMinimal.h"
#include "EItemShopText.generated.h"

UENUM(BlueprintType)
enum class EItemShopText : uint8 {
    ITEM_NAME,
    ITEM_HELP,
    Max,
};

