#pragma once
#include "CoreMinimal.h"
#include "AtlEvtNiagaraSystemPool.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FAtlEvtNiagaraSystemPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* AttachToCharacter;
    
    XRD777_API FAtlEvtNiagaraSystemPool();
};

