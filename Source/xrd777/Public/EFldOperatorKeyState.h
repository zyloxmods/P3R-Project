#pragma once
#include "CoreMinimal.h"
#include "EFldOperatorKeyState.generated.h"

UENUM()
enum class EFldOperatorKeyState : int32 {
    None,
    Disable,
    EnablePrepare,
    Enable,
};

