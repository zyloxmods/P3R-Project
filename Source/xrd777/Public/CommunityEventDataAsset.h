#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "CommunityEventTable.h"
#include "CommunityEventDataAsset.generated.h"

UCLASS(Blueprintable)
class UCommunityEventDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityEventTable> Tables;
    
    UCommunityEventDataAsset();
};

