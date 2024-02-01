#pragma once
#include "CoreMinimal.h"
#include "EPlayerType.generated.h"

UENUM(BlueprintType)
enum class EPlayerType : uint8 {
    BGM,
    VOICE,
    SE,
};

