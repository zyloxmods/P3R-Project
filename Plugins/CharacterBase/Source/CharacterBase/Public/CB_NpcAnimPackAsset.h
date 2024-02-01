#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CB_NpcAnimPack.h"
#include "CB_NpcAnimPackAsset.generated.h"

UCLASS(Blueprintable)
class CHARACTERBASE_API UCB_NpcAnimPackAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCB_NpcAnimPack _AnimPack;
    
    UCB_NpcAnimPackAsset();
};

