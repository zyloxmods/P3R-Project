#pragma once
#include "CoreMinimal.h"
#include "FFldMiscCharBaseReload_Type.generated.h"

UENUM(BlueprintType)
enum class FFldMiscCharBaseReload_Type : uint8 {
    ALL,
    WeaponOnly,
    FFldMiscCharBaseReload_MAX UMETA(Hidden),
};

