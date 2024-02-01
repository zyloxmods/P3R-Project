#pragma once
#include "CoreMinimal.h"
#include "CB_PersonaAnimPack.generated.h"

USTRUCT(BlueprintType)
struct FCB_PersonaAnimPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> _Base;
    
    CHARACTERBASE_API FCB_PersonaAnimPack();
};

