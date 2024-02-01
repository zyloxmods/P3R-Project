#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtPropAttachType.generated.h"

UENUM(BlueprintType)
enum class EAtlEvtPropAttachType : uint8 {
    SetAttachPropActor,
    SetDetachTransform,
    Invalid,
};

