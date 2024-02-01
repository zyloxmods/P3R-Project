#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAppPropsAnimPackType.h"
#include "AppPropsAnimPackAsset.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class XRD777_API UAppPropsAnimPackAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppPropsAnimPackType PackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequenceBase*> Anims;
    
public:
    UAppPropsAnimPackAsset();
};

