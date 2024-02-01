#pragma once
#include "CoreMinimal.h"
#include "ETitleState.generated.h"

UENUM(BlueprintType)
enum class ETitleState : uint8 {
    TS_Caution,
    TS_PhotosensitiveCaution,
    TS_NetworkCheck,
    TS_Logo,
    TS_OP,
    TS_PressWait,
    TS_Select,
    TS_NewGame,
    TS_LoadGame,
    TS_Config,
    TS_Exit,
    TS_ComeBackLoad,
    TS_Num,
    TS_MAX UMETA(Hidden),
};

