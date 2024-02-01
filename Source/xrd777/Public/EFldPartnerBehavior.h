#pragma once
#include "CoreMinimal.h"
#include "EFldPartnerBehavior.generated.h"

UENUM()
enum class EFldPartnerBehavior : int32 {
    None,
    Idel,
    TrackingFar,
    TrackingNear,
    Avoid,
    Adjustment,
};

