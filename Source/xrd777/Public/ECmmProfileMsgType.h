#pragma once
#include "CoreMinimal.h"
#include "ECmmProfileMsgType.generated.h"

UENUM(BlueprintType)
enum class ECmmProfileMsgType : uint8 {
    Normal,
    Reverse,
    Missing,
    Lost,
};

