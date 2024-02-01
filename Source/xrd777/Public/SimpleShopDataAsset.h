#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "SimpleShopData.h"
#include "SimpleShopDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API USimpleShopDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSimpleShopData> Data;
    
    USimpleShopDataAsset();
};

