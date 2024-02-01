#pragma once
#include "CoreMinimal.h"
#include "EFldLevelLoaderType.generated.h"

UENUM(BlueprintType)
enum class EFldLevelLoaderType : uint8 {
    Load,
    Unload,
};

