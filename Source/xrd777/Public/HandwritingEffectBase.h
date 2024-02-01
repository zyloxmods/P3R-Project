#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "HandwritingEffectBase.generated.h"

class UAtomComponent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class XRD777_API AHandwritingEffectBase : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComp;
    
    AHandwritingEffectBase();
};

