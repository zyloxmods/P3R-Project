#pragma once
#include "CoreMinimal.h"
#include "EFldOperatorState.generated.h"

UENUM()
enum class EFldOperatorState : int32 {
    None,
    Free,
    Encounting,
    DailyMenu,
    DungeonMenu,
    AutoRecover,
    Camp,
    LargeMap,
    BackLog,
    VoiceActionDisp,
    Save,
    Battle,
    Event,
    EventEnd,
    DebugCamera,
};

