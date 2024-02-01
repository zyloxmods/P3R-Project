#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiIconKeyHelp.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiIconKeyHelp : uint8 {
    BTL_ICON_KEYHELP_NONE,
    BTL_ICON_KEYHELP_TOP,
    BTL_ICON_KEYHELP_SKILL,
    BTL_ICON_KEYHELP_ITEM,
    BTL_ICON_KEYHELP_PROMISE,
    BTL_ICON_KEYHELP_TARGET,
    BTL_ICON_KEYHELP_ALLYTARGET,
    BTL_ICON_KEYHELP_SHIFT,
    BTL_ICON_KEYHELP_TACTICSALLY,
    BTL_ICON_KEYHELP_TACTICSENEMY,
    BTL_ICON_KEYHELP_THEURGIA,
    BTL_ICON_KEYHELP_THEURGIADETAIL,
    BTL_ICON_KEYHELP_ANALYZE,
    BTL_ICON_KEYHELP_ORACLE_TARGET,
    BTL_ICON_KEYHELP_MAX UMETA(Hidden),
};
