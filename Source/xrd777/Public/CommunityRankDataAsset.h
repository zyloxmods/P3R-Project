#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "CommunityRankItem.h"
#include "CommunityRankDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCommunityRankDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityRankItem> Data;
    
    UCommunityRankDataAsset();
};

