#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AppDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAppDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UAppDataAsset();
    UFUNCTION(BlueprintCallable)
    void Import();
    
};

