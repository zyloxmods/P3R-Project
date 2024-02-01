#pragma once
#include "CoreMinimal.h"
#include "EBtlPersonaAnimationType.generated.h"

UENUM(BlueprintType)
enum class EBtlPersonaAnimationType : uint8 {
    BTL_ANIM_NULL,
    BTL_ANIM_WAIT,
    BTL_ANIM_ATTACK,
    BTL_ANIM_MAGIC,
    BTL_ANIM_SKILL_END,
    BTL_ANIM_THEURGIA_A,
    BTL_ANIM_THEURGIA_B,
    BTL_ANIM_NUM,
    BTL_ANIM_MAX UMETA(Hidden),
};

