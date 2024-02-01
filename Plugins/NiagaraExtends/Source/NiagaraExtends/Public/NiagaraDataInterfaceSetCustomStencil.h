#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceSetCustomStencil.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNiagaraDataInterfaceSetCustomStencil : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomStencilValue;
    
    UNiagaraDataInterfaceSetCustomStencil();
};

