#pragma once
#include "CoreMinimal.h"
#include "EEvtCharaAnimationSlotType.generated.h"

UENUM(BlueprintType)
enum class EEvtCharaAnimationSlotType : uint8 {
    User,
    DefaultSlot,
    EventSlot,
    NodSlot,
    FacialSlot,
    ArmL,
    ArmR,
};

