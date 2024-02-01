#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "NameEntryCnvCharDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UNameEntryCnvCharDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FString> Data;
    
    UNameEntryCnvCharDataAsset();
};

