#pragma once
#include "CoreMinimal.h"
#include "EFldHitCharaIconAttachedType.generated.h"

UENUM(BlueprintType)
enum class EFldHitCharaIconAttachedType : uint8 {
    Auto,
    ModelTop,
    ModelNeck,
    ModelCenter,
    ModelRoot,
    CollisionTop,
    OwnActor,
};

