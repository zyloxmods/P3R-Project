#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "BtlPersonaInterface.generated.h"

class ABtlActor;

UINTERFACE(Blueprintable)
class XRD777_API UBtlPersonaInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IBtlPersonaInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPersonaOwner(ABtlActor* PersonaOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetPersonaTransformFromSkillCondition(const ABtlActor* PersonaOwner) const;
    
};

