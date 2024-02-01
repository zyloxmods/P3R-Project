#pragma once
#include "CoreMinimal.h"
#include "EFldEnemyState.h"
#include "FldEnemyComp.h"
#include "FldEnemyEffectParam.h"
#include "FldEnemyForbiddenDoorComp.generated.h"

class UChildActorComponent;
class UNiagaraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldEnemyForbiddenDoorComp : public UFldEnemyComp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* DisplayChildActorComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* AuraNiagaraComp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldEnemyState State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldEnemyState NextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSetupDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> DisplayClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemyEffectParam AuraEffect;
    
public:
    UFldEnemyForbiddenDoorComp();
};

