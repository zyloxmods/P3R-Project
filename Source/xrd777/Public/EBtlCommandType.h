#pragma once
#include "CoreMinimal.h"
#include "EBtlCommandType.generated.h"

UENUM(BlueprintType)
enum class EBtlCommandType : uint8 {
    BTL_ACT_NULL,
    BTL_ACT_ATTACK,
    BTL_ACT_SKILL,
    BTL_ACT_ITEM,
    BTL_ACT_ESCAPE,
    BTL_ACT_GUARD,
    BTL_ACT_SKIP,
    BTL_ACT_TAKEOVER,
    BTL_ACT_SUMMON,
    BTL_ACT_WAIT,
    BTL_ACT_BADSTATUS_ACTION,
    BTL_ACT_THEURGIA,
    BTL_ACT_FAILURE_WAIT,
    BTL_ACT_RUSH,
    BTL_ACT_NUM,
    BTL_ACT_MAX UMETA(Hidden),
};

