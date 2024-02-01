#pragma once
#include "CoreMinimal.h"
#include "EBtlCommonNameIndex.generated.h"

UENUM(BlueprintType)
enum class EBtlCommonNameIndex : uint8 {
    BTL_COMMON_NAME_DEFENCE,
    BTL_COMMON_NAME_SUMMON,
    BTL_COMMON_NAME_ESCAPE,
    BTL_COMMON_NAME_OPERATION,
    BTL_COMMON_NAME_ATTACK = 0xA,
    BTL_COMMON_NAME_MAX UMETA(Hidden),
};

