#pragma once
#include "CoreMinimal.h"
#include "EEventManagerEventRank.generated.h"

UENUM(BlueprintType)
enum class EEventManagerEventRank : uint8 {
    EventRankA,
    EventRankB,
    EventRankC,
    EventRankUnknown,
};

