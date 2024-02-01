#pragma once
#include "CoreMinimal.h"
#include "EBtlTheurgiaBoostType.generated.h"

UENUM(BlueprintType)
enum class EBtlTheurgiaBoostType : uint8 {
    RecoveryFromDown,
    WithPowerCharge,
    WithPowerBoost,
    LowHP,
    LowSP,
    GetTakeover,
    EnemyBadStatus,
    CriticalAttack,
    PersonaSkillWeak,
    PersonaSkillCritical,
    PersonaSkillPhysics,
    PersonaSkillMagic,
    PersonaSkillHeal,
    PersonaSkillSupport,
    PersonaHitBadStatus,
    HighAnalyze,
    EnemyStatusDown,
    TypeMax,
};

