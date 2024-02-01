#pragma once
#include "CoreMinimal.h"
#include "EEvtSoundCategoryType.generated.h"

UENUM(BlueprintType)
enum class EEvtSoundCategoryType : uint8 {
    GlobalBGM,
    GlobalSE,
    EventVoice,
    EventSE,
    EventSE_2,
    EventSE_3,
    UserID,
};

