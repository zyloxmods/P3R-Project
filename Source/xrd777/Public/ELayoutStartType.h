#pragma once
#include "CoreMinimal.h"
#include "ELayoutStartType.generated.h"

UENUM(BlueprintType)
enum class ELayoutStartType : uint8 {
    StartPart,
    Transfer,
    EventBattle,
    ForbiddenDoor,
    ForbiddenDoorRet,
    FreeID,
    Partner,
    FieldEvent,
};

