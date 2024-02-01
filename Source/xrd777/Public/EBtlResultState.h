#pragma once
#include "CoreMinimal.h"
#include "EBtlResultState.generated.h"

UENUM(BlueprintType)
enum class EBtlResultState : uint8 {
    Init,
    Top,
    Levelup,
    PersonaLvup,
    HeroHumanLevelup,
    HeroPersonaStatus,
    AllyPersonaStatus,
    PersonaStatus,
    End,
};

