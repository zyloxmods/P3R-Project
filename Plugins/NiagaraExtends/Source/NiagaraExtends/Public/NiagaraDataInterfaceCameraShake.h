#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "Templates/SubclassOf.h"
#include "NiagaraDataInterfaceCameraShake.generated.h"

class UNiagaraCameraShake;

UCLASS(Blueprintable, EditInlineNew)
class UNiagaraDataInterfaceCameraShake : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNiagaraCameraShake> NiagaraCameraShake;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> ShakingEffects;
    
public:
    UNiagaraDataInterfaceCameraShake();
};

