#pragma once
#include "CoreMinimal.h"
#include "EBtlDataBadStatus.generated.h"

UENUM(BlueprintType)
enum class EBtlDataBadStatus : uint8 {
    BTL_DATA_BAD_KIZETU,
    BTL_DATA_BAD_CHARM,
    BTL_DATA_BAD_UPSET,
    BTL_DATA_BAD_PANIC,
    BTL_DATA_BAD_FEAR,
    BTL_DATA_BAD_ANGER,
    BTL_DATA_BAD_FREEZE,
    BTL_DATA_BAD_SHOCK,
    BTL_DATA_BAD_POISON,
    BTL_DATA_BAD_OVERLIMIT,
    BTL_DATA_BAD_OVERHEAT,
    BTL_DATA_BAD_BOMB,
    BTL_DATA_BAD_DEAD,
    BTL_DATA_BAD_DOWN,
    BTL_DATA_BAD_MAX UMETA(Hidden),
};

