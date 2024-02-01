#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "BustupGradation.h"
#include "BustupGradationDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBustupGradationDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FBustupGradation> Data;
    
    UBustupGradationDataAsset();
};

