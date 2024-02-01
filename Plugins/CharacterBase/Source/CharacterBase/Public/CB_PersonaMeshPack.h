#pragma once
#include "CoreMinimal.h"
#include "CB_PersonaMeshPack.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FCB_PersonaMeshPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> _Base;
    
    CHARACTERBASE_API FCB_PersonaMeshPack();
};

