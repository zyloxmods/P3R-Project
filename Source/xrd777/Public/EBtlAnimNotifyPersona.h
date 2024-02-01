#pragma once
#include "CoreMinimal.h"
#include "EBtlAnimNotifyPersona.generated.h"

UENUM(BlueprintType)
enum class EBtlAnimNotifyPersona : uint8 {
    Custom,
    SkillShot,
    SkillCamChange,
    FadeoutStart,
    AnimationStop,
};

