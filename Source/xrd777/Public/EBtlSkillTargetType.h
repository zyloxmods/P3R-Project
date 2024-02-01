#pragma once
#include "CoreMinimal.h"
#include "EBtlSkillTargetType.generated.h"

UENUM(BlueprintType)
enum class EBtlSkillTargetType : uint8 {
    BTL_SKILL_TARGET_CHARACTERS,
    BTL_SKILL_TARGET_GROUP,
    BTL_SKILL_TARGET_ENCHANTER,
    BTL_SKILL_TARGET_FIELD_CENTER,
    BTL_SKILL_TARGET_MAX UMETA(Hidden),
};

