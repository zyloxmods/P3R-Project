#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BtlAIManagerComponent.generated.h"

class ABtlActor;
class UBtlActionManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlAIManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBtlAIManagerComponent();
    UFUNCTION(BlueprintCallable)
    void DetermineAIAction(UBtlActionManagerComponent* ActionManager, ABtlActor* commander);
    
};

