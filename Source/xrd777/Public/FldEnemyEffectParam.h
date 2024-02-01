#pragma once
#include "CoreMinimal.h"
#include "FldEnemyEffectParam.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FFldEnemyEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    XRD777_API FFldEnemyEffectParam();
};

