#pragma once
#include "CoreMinimal.h"
#include "EBtlDataAnalyze.generated.h"

UENUM(BlueprintType)
enum class EBtlDataAnalyze : uint8 {
    BTL_DATA_ANA_NORMAL,
    BTL_DATA_ANA_MUKOU,
    BTL_DATA_ANA_HANSYA,
    BTL_DATA_ANA_KYUSYU,
    BTL_DATA_ANA_WEAK,
    BTL_DATA_ANA_TAISEI,
    BTL_DATA_ANA_NOOPEN,
    BTL_DATA_ANA_MAX UMETA(Hidden),
};

