#pragma once
#include "CoreMinimal.h"
#include "EBtlPhaseType.generated.h"

UENUM(BlueprintType)
enum class EBtlPhaseType : uint8 {
    None,
    Fighting,
    Victory,
    Annihilation,
    Escape,
    EscapeSkill,
    Others,
};

