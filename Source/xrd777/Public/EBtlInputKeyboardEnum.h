#pragma once
#include "CoreMinimal.h"
#include "EBtlInputKeyboardEnum.generated.h"

UENUM(BlueprintType)
enum class EBtlInputKeyboardEnum : uint8 {
    BTL_INPUT_KEY_NONE,
    BTL_INPUT_KEY_RU,
    BTL_INPUT_KEY_RR,
    BTL_INPUT_KEY_RL,
    BTL_INPUT_KEY_RD,
    BTL_INPUT_KEY_LU,
    BTL_INPUT_KEY_LR,
    BTL_INPUT_KEY_LL,
    BTL_INPUT_KEY_LD,
    BTL_INPUT_KEY_R1,
    BTL_INPUT_KEY_L1,
    BTL_INPUT_KEY_R2,
    BTL_INPUT_KEY_L2,
    BTL_INPUT_KEY_R3,
    BTL_INPUT_KEY_L3,
    BTL_INPUT_KEY_OPTION,
    BTL_INPUT_KEY_TOUCH,
    BTL_INPUT_MAX UMETA(Hidden),
};

