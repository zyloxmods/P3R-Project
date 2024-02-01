#pragma once
#include "CoreMinimal.h"
#include "EUIVelvetRoomDrawScene.generated.h"

UENUM(BlueprintType)
enum class EUIVelvetRoomDrawScene : uint8 {
    NONE,
    EVENT,
    MAIN,
    COMBINE_SELECT,
    COMBINE,
    DRAWER,
    REGIST,
    TALK,
};

