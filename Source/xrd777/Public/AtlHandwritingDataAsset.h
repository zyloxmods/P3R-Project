#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAtlEvtHandwritingType.h"
#include "AtlHandwritingDataAsset.generated.h"

class AHandwritingEffectBase;

UCLASS(Blueprintable)
class XRD777_API UAtlHandwritingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAtlEvtHandwritingType, TSoftClassPtr<AHandwritingEffectBase>> HandwritingEffectSoftObjMap;
    
    UAtlHandwritingDataAsset();
};

