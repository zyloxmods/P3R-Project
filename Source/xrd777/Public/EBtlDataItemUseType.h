#pragma once
#include "CoreMinimal.h"
#include "EBtlDataItemUseType.generated.h"

UENUM(BlueprintType)
enum class EBtlDataItemUseType : uint8 {
    BTL_DATA_ITEM_USE_SUCCESS,
    BTL_DATA_ITEM_USE_DONTUSE,
    BTL_DATA_ITEM_USE_MAX UMETA(Hidden),
};

