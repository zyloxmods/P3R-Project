#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "AtlEvtPreData.h"
#include "AtlEvtPreDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAtlEvtPreDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtPreData> Data;
    
    UAtlEvtPreDataAsset();
};

