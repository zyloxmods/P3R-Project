#pragma once
#include "CoreMinimal.h"
#include "ESaveDrawOpenType.generated.h"

UENUM(BlueprintType)
enum class ESaveDrawOpenType : uint8 {
    TYPE_FIELD,
    TYPE_CAMP,
    TYPE_TITLE,
    TYPE_MAX UMETA(Hidden),
};

