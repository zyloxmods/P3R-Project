#pragma once
#include "CoreMinimal.h"
#include "EFldAnimalMotion_BIRD.generated.h"

UENUM(BlueprintType)
enum class EFldAnimalMotion_BIRD : uint8 {
    Blank,
    Idle,
    Walk,
    Run,
    PersonalAction00,
    PersonalAction01,
    FlyAway,
    ComeBack,
    FlyIdol,
    EFldAnimalMotion_MAX UMETA(Hidden),
};

