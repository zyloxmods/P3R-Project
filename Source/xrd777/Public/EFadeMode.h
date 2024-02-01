#pragma once
#include "CoreMinimal.h"
#include "EFadeMode.generated.h"

UENUM()
enum class EFadeMode : int32 {
    Idle,
    In,
    Out,
};

