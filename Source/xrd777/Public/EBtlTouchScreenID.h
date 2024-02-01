#pragma once
#include "CoreMinimal.h"
#include "EBtlTouchScreenID.generated.h"

UENUM(BlueprintType)
enum class EBtlTouchScreenID : uint8 {
    BTL_SCREEN_ID_CMN,
    BTL_SCREEN_ID_SCROLL,
    BTL_SCREEN_ID_ITEM_LIST,
    BTL_SCREEN_ID_SKILL_LIST,
    BTL_SCREEN_ID_TACTICS1_LIST,
    BTL_SCREEN_ID_TACTICS2_LIST,
    BTL_SCREEN_ID_TACTICS3_LIST,
    BTL_SCREEN_ID_THEURGIA_LIST,
    BTL_SCREEN_ID_MAX UMETA(Hidden),
};

