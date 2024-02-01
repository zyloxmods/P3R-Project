#pragma once
#include "CoreMinimal.h"
#include "EUIVELVET_ROOM_MCA_CAPTURE.generated.h"

UENUM(BlueprintType)
enum class EUIVELVET_ROOM_MCA_CAPTURE : uint8 {
    NONE,
    TOP,
    COMBINE2,
    SEARCH,
    SPECIAL,
    BOOK,
    REGIST,
    EUIVELVET_ROOM_MCA_MAX UMETA(Hidden),
};

