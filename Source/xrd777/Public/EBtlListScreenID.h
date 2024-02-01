#pragma once
#include "CoreMinimal.h"
#include "EBtlListScreenID.generated.h"

UENUM(BlueprintType)
enum class EBtlListScreenID : uint8 {
    NONE,
    BTL_LIST_SCREEN_ID_ITEM,
    BTL_LIST_SCREEN_ID_SKILL,
    BTL_LIST_SCREEN_ID_TACTICS1,
    BTL_LIST_SCREEN_ID_TACTICS2,
    BTL_LIST_SCREEN_ID_TACTICS3,
    BTL_LIST_SCREEN_ID_THEURGIA,
};

