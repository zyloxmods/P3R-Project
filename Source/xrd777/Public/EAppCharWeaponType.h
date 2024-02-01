#pragma once
#include "CoreMinimal.h"
#include "EAppCharWeaponType.generated.h"

UENUM(BlueprintType)
enum class EAppCharWeaponType : uint8 {
    None,
    Battle,
    Field,
};

