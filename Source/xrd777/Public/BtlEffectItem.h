#pragma once
#include "CoreMinimal.h"
#include "EBtlBadStatusIcon.h"
#include "BtlEffectItem.generated.h"

class AActor;
class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FBtlEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ParentEmpActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ObjectReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlBadStatusIcon Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BadStatus;
    
    XRD777_API FBtlEffectItem();
};

