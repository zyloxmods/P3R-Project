#pragma once
#include "CoreMinimal.h"
#include "AppCharWeaponAnimType.generated.h"

UENUM(BlueprintType)
enum class AppCharWeaponAnimType : uint8 {
    None,
    AnimDefault,
    Idle,
    Attack,
    AttackLong,
    AttackCritical,
    AttackMiss,
};

