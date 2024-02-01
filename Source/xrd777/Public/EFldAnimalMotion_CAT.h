#pragma once
#include "CoreMinimal.h"
#include "EFldAnimalMotion_CAT.generated.h"

UENUM(BlueprintType)
enum class EFldAnimalMotion_CAT : uint8 {
    Blank,
    Idle_Stand,
    Idle_Sit,
    Walk,
    Run,
    To_Stand,
    To_Sit,
    PersonalAction00_Stand,
    PersonalAction01_Stand,
    PersonalAction00_Sit,
    PersonalAction01_Sit,
    Max,
};

