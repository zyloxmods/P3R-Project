#pragma once
#include "CoreMinimal.h"
#include "EBtlResidentResource.generated.h"

UENUM(BlueprintType)
enum class EBtlResidentResource : uint8 {
    Summon,
    SummonShell,
    HitSlash,
    HitPierce,
    HitStrike,
    ReflectionHit,
    AbsorptionHit,
    PersonaAura,
    PersonaAuraShine,
    ShadowSummon,
    ShadowDead,
    ShadowDeadSplash,
    HitPierceYukariCritical,
    MAX,
};

