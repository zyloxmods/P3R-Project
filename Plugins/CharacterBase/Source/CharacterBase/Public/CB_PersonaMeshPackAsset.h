#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CB_PersonaMeshPack.h"
#include "CB_PersonaMeshPackAsset.generated.h"

UCLASS(Blueprintable)
class CHARACTERBASE_API UCB_PersonaMeshPackAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCB_PersonaMeshPack _MeshPack;
    
    UCB_PersonaMeshPackAsset();
};

