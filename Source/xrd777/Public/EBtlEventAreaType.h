#pragma once
#include "CoreMinimal.h"
#include "EBtlEventAreaType.generated.h"

UENUM(BlueprintType)
enum class EBtlEventAreaType : uint8 {
    BTL_AREA_NULL,
    BTL_AREA_INVOKE,
    BTL_AREA_PARTY_TEAM,
    BTL_AREA_TARGET,
    BTL_AREA_ENEMY_TEAM,
    BTL_AREA_PARTY_MEMBER1,
    BTL_AREA_PARTY_MEMBER2,
    BTL_AREA_PARTY_MEMBER3,
    BTL_AREA_NUM,
    BTL_AREA_MAX UMETA(Hidden),
};

