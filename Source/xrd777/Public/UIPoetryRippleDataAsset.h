#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "PoetryRipplesParam.h"
#include "UIPoetryRippleDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UUIPoetryRippleDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoetryRipplesParam> Data;
    
    UUIPoetryRippleDataAsset();
};

