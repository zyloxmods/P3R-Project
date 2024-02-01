#pragma once
#include "CoreMinimal.h"
#include "EBtlLoadingTimeCategory.generated.h"

UENUM(BlueprintType)
enum class EBtlLoadingTimeCategory : uint8 {
    Levels,
    Residents,
    Resources,
    Resourcesenemy,
    GUI,
    CharacterSetup,
    GUIModel,
    MAX,
};

