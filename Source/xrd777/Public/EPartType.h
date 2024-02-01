#pragma once
#include "CoreMinimal.h"
#include "EPartType.generated.h"

UENUM(BlueprintType)
enum class EPartType : uint8 {
    Blank0,
    FloorStart,
    Straight,
    Lshape,
    Tshape,
    Croshape,
    DeadEnd,
    RoomA,
    RoomB,
    MissingRoom,
    ForbiddenDoor,
    FloorEnd,
    Blank12,
    Num,
    Wall = 0x14,
};

