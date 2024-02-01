#pragma once
#include "CoreMinimal.h"
#include "EBtlAnalyzeSupportType.generated.h"

UENUM(BlueprintType)
enum class EBtlAnalyzeSupportType : uint8 {
    BTL_ANALYZE_SUPPORT_QUESTION,
    BTL_ANALYZE_SUPPORT_NOT_PREPARE,
    BTL_ANALYZE_SUPPORT_CANNOT_ENEMY,
    BTL_ANALYZE_SUPPORT_PLAY,
    BTL_ANALYZE_SUPPORT_ALREADY_PLAY,
    BTL_ANALYZE_SUPPORT_NOT_SP,
    BTL_ANALYZE_SUPPORT_MAX UMETA(Hidden),
};

