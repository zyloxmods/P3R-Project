#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "BustupEnvironmentBG.h"
#include "BustupEnvironmentDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBustupEnvironmentDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBustupEnvironmentBG> Data;
    
    UBustupEnvironmentDataAsset();
};

