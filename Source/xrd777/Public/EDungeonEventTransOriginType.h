#pragma once
#include "CoreMinimal.h"
#include "EDungeonEventTransOriginType.generated.h"

UENUM(BlueprintType)
enum class EDungeonEventTransOriginType : uint8 {
    Part,
    ObjectInfo,
    TBox,
    Clock,
    Enemy,
    DirectEnemy,
    MissingNPC,
    SecretGate,
    RefActor = 0x63,
};

