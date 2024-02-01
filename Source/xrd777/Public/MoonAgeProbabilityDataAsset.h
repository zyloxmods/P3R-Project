#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "MoonAgeProbabilityItem.h"
#include "MoonAgeProbabilityDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UMoonAgeProbabilityDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoonAgeProbabilityItem> Data;
    
    UMoonAgeProbabilityDataAsset();
};

