#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CB_NpcMeshPack.h"
#include "CB_NpcMeshPackAsset.generated.h"

UCLASS(Blueprintable)
class CHARACTERBASE_API UCB_NpcMeshPackAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCB_NpcMeshPack _MeshPack;
    
    UCB_NpcMeshPackAsset();
};

