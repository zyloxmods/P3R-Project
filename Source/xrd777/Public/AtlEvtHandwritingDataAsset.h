#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AtlEvtHandwritingData.h"
#include "AtlEvtHandwritingDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAtlEvtHandwritingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlEvtHandwritingData EvtHandwritingData;
    
    UAtlEvtHandwritingDataAsset();
};

