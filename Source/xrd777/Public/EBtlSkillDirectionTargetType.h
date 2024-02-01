#pragma once
#include "CoreMinimal.h"
#include "EBtlSkillDirectionTargetType.generated.h"

UENUM(BlueprintType)
enum class EBtlSkillDirectionTargetType : uint8 {
    BTL_SKILL_DIR_FRONT,
    BTL_SKILL_DIR_NONE,
    BTL_SKILL_DIR_FRONT_NOT_ROT,
    BTL_SKILL_DIR_NONE_NOT_ROT,
    BTL_SKILL_DIR_MAX UMETA(Hidden),
};

