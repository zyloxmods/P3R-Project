#pragma once
#include "CoreMinimal.h"
#include "CommunityPresentData.h"
#include "CommunityPresentTable.generated.h"

USTRUCT(BlueprintType)
struct FCommunityPresentTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityPresentData> Datas;
    
    XRD777_API FCommunityPresentTable();
};

