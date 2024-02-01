#pragma once
#include "CoreMinimal.h"
#include "EBtlShuffleKeyHelpState.generated.h"

UENUM(BlueprintType)
enum class EBtlShuffleKeyHelpState : uint8 {
    BTL_SHUFFLE_KEYHELP_NONE,
    BTL_SHUFFLE_KEYHELP_SELECTCARD,
    BTL_SHUFFLE_KEYHELP_SELECTPERSONA,
    BTL_SHUFFLE_KEYHELP_MAX UMETA(Hidden),
};

