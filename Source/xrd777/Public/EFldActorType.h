#pragma once
#include "CoreMinimal.h"
#include "EFldActorType.generated.h"

UENUM(BlueprintType)
enum class EFldActorType : uint8 {
    Player,
    Door,
    AnimObj,
    LinkAnimObj,
    HitActor,
    Npc,
    CmmNpc,
    Animal,
    PlayerStart,
    CrowdManager,
    CrowdTarget,
    TargetIcon,
};

