#pragma once
#include "CoreMinimal.h"
#include "EBtlItemSkillListTextLayout.generated.h"

UENUM(BlueprintType)
enum class EBtlItemSkillListTextLayout : uint8 {
    ITEM_SKILL_NAME,
    ITEM_SKILL_HELP,
    ITEM_HELP_POS,
    SKILL_HELP_POS,
    SKILL_PERSONA_NAME,
    SKILL_PERSONA_NAME_POS,
    Max,
};

