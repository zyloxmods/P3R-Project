#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CB_HumanMeshPack.h"
#include "CB_HumanMeshPackAsset.generated.h"

UCLASS(Blueprintable)
class CHARACTERBASE_API UCB_HumanMeshPackAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCB_HumanMeshPack _MeshPack;
    
    UCB_HumanMeshPackAsset();
};

