#pragma once
#include "CoreMinimal.h"
#include "EEvtManagerState.generated.h"

UENUM(BlueprintType)
enum class EEvtManagerState : uint8 {
    EVTM_BC_Playing,
    EVTM_A_Playing,
    EVTM_Playing,
    EVTM_BackLog,
    EVTM_NetAnswer,
    EVTM_A_Skip,
    TS_Exit,
    TS_Num,
};

