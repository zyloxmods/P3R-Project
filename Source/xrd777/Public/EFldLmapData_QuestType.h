#pragma once
#include "CoreMinimal.h"
#include "EFldLmapData_QuestType.generated.h"

UENUM(BlueprintType)
enum class EFldLmapData_QuestType : uint8 {
    Npc,
    Target,
    Hit,
    EFldLmapData_MAX UMETA(Hidden),
};

