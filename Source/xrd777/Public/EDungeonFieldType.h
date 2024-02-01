#pragma once
#include "CoreMinimal.h"
#include "EDungeonFieldType.generated.h"

UENUM(BlueprintType)
enum class EDungeonFieldType : uint8 {
    Auto,
    Fixed,
    Design,
    Num,
};

