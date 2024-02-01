#pragma once
#include "CoreMinimal.h"
#include "EBtlAnimNotify.generated.h"

UENUM(BlueprintType)
enum class EBtlAnimNotify : uint8 {
    Custom,
    Hit,
    SummonActBurst,
    HideWeapon,
    ShowWeapon,
    HideGun,
    ShowGun,
    ShiftPersonaSkill,
    AnimationStop,
    HitSub,
    BlendToWait,
    ItemUse,
    PersonalMotion,
    BackstepLoop,
    PlayCriticalAttackCamera,
    SyncDeadAnim,
    SkillAct,
    SkillCamChange,
    SkillActEffect,
    BlendToCommandWait,
};

