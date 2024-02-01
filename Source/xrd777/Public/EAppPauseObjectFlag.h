#pragma once
#include "CoreMinimal.h"
#include "EAppPauseObjectFlag.generated.h"

UENUM(BlueprintType)
enum class EAppPauseObjectFlag : uint8 {
    Unknown,
    CampUI,
    CharacterModel,
    FieldLocal = 0x4,
    SystemUI = 0x8,
    FacilityUI = 0x10,
    FieldSound = 0x20,
    FieldCrowd = 0x40,
    Always = 0xFF,
};

