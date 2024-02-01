#pragma once
#include "CoreMinimal.h"
#include "EBtlPersonaSceneAnimationType.generated.h"

UENUM(BlueprintType)
enum class EBtlPersonaSceneAnimationType : uint8 {
    BTL_ANIM_THEURGIA_A,
    BTL_ANIM_THEURGIA_A_LOOP,
    BTL_ANIM_THEURGIA_B,
    BTL_ANIM_THEURGIA_B_LOOP,
    BTL_ANIM_MIXRAID_A,
    BTL_ANIM_MIXRAID_A_LOOP,
    BTL_ANIM_MAX UMETA(Hidden),
};

