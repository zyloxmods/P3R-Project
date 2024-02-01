#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiIconHit.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiIconHit : uint8 {
    BTL_ICON_HIT_NORMAL,
    BTL_ICON_HIT_HANSYA,
    BTL_ICON_HIT_KYUSYU,
    BTL_ICON_HIT_MUKOU,
    BTL_ICON_HIT_TAISEI,
    BTL_ICON_HIT_SAKE,
    BTL_ICON_HIT_MISS,
    BTL_ICON_HIT_MAX UMETA(Hidden),
};

