#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FldCharEffectParam.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FFldCharEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    XRD777_API FFldCharEffectParam();
};

