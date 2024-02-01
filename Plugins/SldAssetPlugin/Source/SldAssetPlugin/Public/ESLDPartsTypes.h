#pragma once
#include "CoreMinimal.h"
#include "ESLDPartsTypes.generated.h"

UENUM(BlueprintType)
enum class ESLDPartsTypes : uint8 {
    APP_SPRLAYOUT_PARTS_TYPE_NONE,
    APP_SPRLAYOUT_PARTS_TYPE_DUMMY,
    APP_SPRLAYOUT_PARTS_TYPE_PARTS,
    APP_SPRLAYOUT_PARTS_TYPE_RESOURCE,
    APP_SPRLAYOUT_PARTS_TYPE_MAX UMETA(Hidden),
};

