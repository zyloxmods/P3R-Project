#pragma once
#include "CoreMinimal.h"
#include "CB_NpcMeshPack.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FCB_NpcMeshPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> _Base;
    
    CHARACTERBASE_API FCB_NpcMeshPack();
};

