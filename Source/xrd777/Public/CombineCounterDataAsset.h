#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "CombineCounterItem.h"
#include "CombineCounterDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCombineCounterDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombineCounterItem> Data;
    
    UCombineCounterDataAsset();
};

