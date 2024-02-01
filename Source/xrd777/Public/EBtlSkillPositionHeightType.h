#pragma once
#include "CoreMinimal.h"
#include "EBtlSkillPositionHeightType.generated.h"

UENUM(BlueprintType)
enum class EBtlSkillPositionHeightType : uint8 {
    BTL_SKILL_POS_H_GROUND,
    BTL_SKILL_POS_H_CENTER,
    BTL_SKILL_POS_H_ONHEAD,
    BTL_SKILL_POS_H_MAX UMETA(Hidden),
};

