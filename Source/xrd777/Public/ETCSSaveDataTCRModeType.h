#pragma once
#include "CoreMinimal.h"
#include "ETCSSaveDataTCRModeType.generated.h"

UENUM(BlueprintType)
enum class ETCSSaveDataTCRModeType : uint8 {
    NONE,
    INIT_WEB_API,
    SYNC_WEB_API,
    INIT_WRITE_TCR,
    SYNC_WRITE_TCR,
    INIT_READ_TCR,
    SYNC_READ_TCR,
    END,
};

