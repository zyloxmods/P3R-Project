#pragma once
#include "CoreMinimal.h"
#include "EBtlSkillCameraType.generated.h"

UENUM(BlueprintType)
enum class EBtlSkillCameraType : uint8 {
    NORMAL,
    DYNAMIC,
    CUTIN,
};

