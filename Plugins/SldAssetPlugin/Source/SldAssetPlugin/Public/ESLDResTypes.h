#pragma once
#include "CoreMinimal.h"
#include "ESLDResTypes.generated.h"

UENUM(BlueprintType)
enum class ESLDResTypes : uint8 {
    APP_SPRLAYOUT_RESOURCE_TYPE_NONE,
    APP_SPRLAYOUT_RESOURCE_TYPE_SPR,
    APP_SPRLAYOUT_RESOURCE_TYPE_TEXTURE,
    APP_SPRLAYOUT_RESOURCE_TYPE_MAX UMETA(Hidden),
};

