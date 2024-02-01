#pragma once
#include "CoreMinimal.h"
#include "EFadingState.generated.h"

UENUM()
enum class EFadingState : int32 {
    Blank,
    Filled,
    Running,
};

