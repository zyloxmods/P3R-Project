#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CB_HumanAnimPack.h"
#include "CB_HumanAnimPackAsset.generated.h"

UCLASS(Blueprintable)
class CHARACTERBASE_API UCB_HumanAnimPackAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCB_HumanAnimPack _AnimPack;
    
    UCB_HumanAnimPackAsset();
};

