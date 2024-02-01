#pragma once
#include "CoreMinimal.h"
#include "EAppPropsCardType.generated.h"

UENUM(BlueprintType)
enum class EAppPropsCardType : uint8 {
    Blank,
    Persona,
    MajorArcana,
    MinorArcana,
};

