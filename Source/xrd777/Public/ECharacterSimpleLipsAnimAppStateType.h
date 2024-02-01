#pragma once
#include "CoreMinimal.h"
#include "ECharacterSimpleLipsAnimAppStateType.generated.h"

UENUM(BlueprintType)
enum class ECharacterSimpleLipsAnimAppStateType : uint8 {
    StartSpeaking,
    StopSpeaking,
};

