#pragma once
#include "CoreMinimal.h"
#include "EDungeonObjType.generated.h"

UENUM(BlueprintType)
enum class EDungeonObjType : uint8 {
    Blank,
    TBoxNormal,
    TBoxRare,
    TBoxJewelry,
    TBoxPrimField,
    ReturnDevice = 0xA,
    TransferDevice,
    MonadReturnDevice = 0xF,
    MonadTransferDevice,
    TBoxMedal1 = 0x15,
    TBoxMedal2,
    TBoxMedal3,
    Broken1 = 0x1E,
    Broken2,
    Broken3,
    BrokenFragment = 0x27,
    Clock,
    ClockFloorEntrance = 0x32,
    Gimmick = 0x64,
};

