#pragma once
#include "CoreMinimal.h"
#include "EQuestRequestPersonaType.generated.h"

UENUM(BlueprintType)
enum class EQuestRequestPersonaType : uint8 {
    None,
    Has,
    Skill,
    Level,
};

