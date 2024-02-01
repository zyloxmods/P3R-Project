#pragma once
#include "CoreMinimal.h"
#include "ETitleMenueState.generated.h"

UENUM(BlueprintType)
enum class ETitleMenueState : uint8 {
    TM_NewGame,
    TM_LoadGame,
    TM_Config,
    TM_ExitGameDialog,
    TM_RightsNotation,
    TM_Localization,
    TM_Num,
    TM_MAX UMETA(Hidden),
};

