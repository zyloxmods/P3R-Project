#pragma once
#include "CoreMinimal.h"
#include "CommunityEventData.h"
#include "CommunityRankUpEventData.h"
#include "CommunityEventTable.generated.h"

USTRUCT(BlueprintType)
struct FCommunityEventTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityEventData> NotRankUpTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityRankUpEventData> RankUpTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityRankUpEventData> LoverRankUpTable;
    
    XRD777_API FCommunityEventTable();
};

