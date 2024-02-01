#pragma once
#include "CoreMinimal.h"
#include "EBtlAnimNotifyShadow.generated.h"

UENUM(BlueprintType)
enum class EBtlAnimNotifyShadow : uint8 {
    Custom,
    Hit,
    SkillShot,
    SkillCamChange,
    DeadPerformance,
    PersonalMotion,
    AnimationStop,
    BlendToWait,
    ShowWeaponEffect,
};

