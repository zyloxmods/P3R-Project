#pragma once
#include "CoreMinimal.h"
#include "EEvtSoundManageOperationType.generated.h"

UENUM(BlueprintType)
enum class EEvtSoundManageOperationType : uint8 {
    DayTimeFieldEnvSE,
    SetAisacValueFieldEnvSE,
};

