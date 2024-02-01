#pragma once
#include "CoreMinimal.h"
#include "CB_NpcAnimPack.generated.h"

USTRUCT(BlueprintType)
struct FCB_NpcAnimPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> _Base;
    
    CHARACTERBASE_API FCB_NpcAnimPack();
};

