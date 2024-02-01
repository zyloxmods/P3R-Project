#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AppMultiDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAppMultiDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UAppMultiDataAsset();
    UFUNCTION(BlueprintCallable)
    void Import();
    
};

