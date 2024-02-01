#pragma once
#include "CoreMinimal.h"
#include "EsoundPlayerType.generated.h"

UENUM(BlueprintType)
enum class EsoundPlayerType : uint8 {
    BGM,
    ENV,
    SE,
    VOICE,
    OTHER,
    NONE,
};

