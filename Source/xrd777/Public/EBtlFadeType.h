#pragma once
#include "CoreMinimal.h"
#include "EBtlFadeType.generated.h"

UENUM(BlueprintType)
enum class EBtlFadeType : uint8 {
    BTL_FADE_TYPE_NULL,
    BTL_FADE_TYPE_BLACKOUT,
    BTL_FADE_TYPE_WHITEOUT,
    BTL_FADE_TYPE_LINEWIPE,
    BTL_FADE_TYPE_CIRCLE,
    BTL_FADE_TYPE_CIRCLE2,
    BTL_FADE_TYPE_CIRCLE3,
    BTL_FADE_TYPE_SHIFTIN,
    BTL_FADE_TYPE_SHIFTOUT,
    BTL_FADE_TYPE_THEURGIA,
    BTL_FADE_TYPE_BATTLE_RESULT,
    BTL_FADE_TYPE_BATTLE_RESULT_END,
    BTL_FADE_TYPE_CONTINUE,
    BTL_FADE_TYPE_MAX UMETA(Hidden),
};
