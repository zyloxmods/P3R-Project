#pragma once
#include "CoreMinimal.h"
#include "EPersonaGrowthEvent.generated.h"

UENUM(BlueprintType)
enum class EPersonaGrowthEvent : uint8 {
    None,
    LevelUp,
    AddSkill,
    Conception = 0x4,
    ShowStatus = 0x6,
    ShowStatus_Combine,
};

