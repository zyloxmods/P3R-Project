#pragma once
#include "CoreMinimal.h"
#include "EBtlSkillPositionTargetType.generated.h"

UENUM(BlueprintType)
enum class EBtlSkillPositionTargetType : uint8 {
    BTL_SKILL_POS_TARGETS_ROOT,
    BTL_SKILL_POS_TARGETS_DAMAGE_SOCKET,
    BTL_SKILL_POS_TARGETS_CYLINDER,
    BTL_SKILL_POS_WORLD,
    BTL_SKILL_POS_MAX UMETA(Hidden),
};

