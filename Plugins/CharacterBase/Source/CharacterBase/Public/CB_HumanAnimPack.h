#pragma once
#include "CoreMinimal.h"
#include "CB_HumanAnimPack.generated.h"

USTRUCT(BlueprintType)
struct FCB_HumanAnimPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> _Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> _Costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> _Hair;
    
    CHARACTERBASE_API FCB_HumanAnimPack();
};

