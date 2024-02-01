#pragma once
#include "CoreMinimal.h"
#include "ECmpLayoutConfig.generated.h"

UENUM(BlueprintType)
enum class ECmpLayoutConfig : uint8 {
    PLAYLIST_POS,
    SET_POS,
    INFO_POS,
    INFO_TEXT_POS,
    BUTTON_TEXT_POS,
    AUDIO_DEVICE_BASELINE,
    Max,
};

