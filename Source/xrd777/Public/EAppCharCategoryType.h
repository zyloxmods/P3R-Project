#pragma once
#include "CoreMinimal.h"
#include "EAppCharCategoryType.generated.h"

UENUM(BlueprintType)
enum class EAppCharCategoryType : uint8 {
    None,
    MainCharacter,
    SubCharacter,
    NpcCharacter,
};

