#pragma once
#include "CoreMinimal.h"
#include "EBtlCalcParamType.generated.h"

UENUM(BlueprintType)
enum class EBtlCalcParamType : uint8 {
    LEVEL_ATK,
    LEVEL_DEF,
    HP_ATK,
    HP_DEF,
    MAXHP_ATK,
    MAXHP_DEF,
    SP_ATK,
    SP_DEF,
    MAXSP_ATK,
    MAXSP_DEF,
    AFFINITY_ATK,
    AFFINITY_DEF,
    PARAM_ATK,
    PARAM_DEF,
    BAD_AFFINITY_ATK,
    BAD_AFFINITY_DEF,
    HIT,
    BAD_HIT,
    SKILL_POWER,
    CRITICAL,
    DOWN,
    LEVELDAMAGE,
    MAGIC_BONUS_DAMAGE,
    MAGIC_BONUS_RECOVERY,
    ALLOUT_MEMBER_NUM,
    ALLOUT_LEVEL_POWER_RATE,
    ARMOR_ATK,
    ARMOR_DEF,
    EVASION_ATK,
    EVASION_DEF,
};

