#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CB_PersonaAnimPack.h"
#include "CB_PersonaAnimPackAsset.generated.h"

UCLASS(Blueprintable)
class CHARACTERBASE_API UCB_PersonaAnimPackAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCB_PersonaAnimPack _AnimPack;
    
    UCB_PersonaAnimPackAsset();
};

