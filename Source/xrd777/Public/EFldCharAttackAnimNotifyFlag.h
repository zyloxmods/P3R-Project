#pragma once
#include "CoreMinimal.h"
#include "EFldCharAttackAnimNotifyFlag.generated.h"

UENUM()
enum class EFldCharAttackAnimNotifyFlag : int32 {
    None,
    Collision,
    Orbit,
    Encount,
};

