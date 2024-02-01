#pragma once
#include "CoreMinimal.h"
#include "ELipSyncAppStateType.generated.h"

UENUM(BlueprintType)
enum class ELipSyncAppStateType : uint8 {
    StartSpeaking,
    StopSpeaking,
};

