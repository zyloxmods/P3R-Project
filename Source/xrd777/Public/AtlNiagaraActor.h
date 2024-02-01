#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AtlNiagaraActor.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class XRD777_API AAtlNiagaraActor : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
public:
    AAtlNiagaraActor();
};

