#pragma once
#include "CoreMinimal.h"
#include "EDungeonUISpriteOrigin.generated.h"

UENUM(BlueprintType)
enum class EDungeonUISpriteOrigin : uint8 {
    LeftUp,
    RightUp,
    Center,
    LeftCenter,
    RightCenter,
    CenterDown,
    RightDown,
};

