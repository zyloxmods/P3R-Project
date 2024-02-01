#pragma once
#include "CoreMinimal.h"
#include "ETagType.generated.h"

UENUM(BlueprintType)
enum class ETagType : uint8 {
    TITLE,
    NAME,
    TEXTURE,
    SPACE,
};

