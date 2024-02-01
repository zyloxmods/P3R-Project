#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldDungeonEffectCameraAttachActor.generated.h"

class UNiagaraCameraAttachComponent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonEffectCameraAttachActor : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraCameraAttachComponent* m_pEffec;
    
public:
    AFldDungeonEffectCameraAttachActor();
private:
    UFUNCTION(BlueprintCallable)
    void OnComplete(UNiagaraComponent* PSystem);
    
};

