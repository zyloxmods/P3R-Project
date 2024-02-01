#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "CommunityPresentTable.h"
#include "CommunityPresentDataAsset.generated.h"

UCLASS(Blueprintable)
class UCommunityPresentDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityPresentTable> Tables;
    
    UCommunityPresentDataAsset();
};

