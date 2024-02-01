#pragma once
#include "CoreMinimal.h"
#include "EFldNpcActorType.generated.h"

UENUM(BlueprintType)
enum class EFldNpcActorType : uint8 {
    Normal,
    Special,
    Target,
    Hit,
};

