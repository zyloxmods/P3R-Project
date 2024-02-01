#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtManagerPauseFlag.generated.h"

UENUM(BlueprintType)
enum class EAtlEvtManagerPauseFlag : uint8 {
    None,
    AtlEvtMessagePaused,
    AEvtPaused,
    BacklogPaused = 0x4,
    NetAnswerPaused = 0x8,
    Always = 0xFF,
};

