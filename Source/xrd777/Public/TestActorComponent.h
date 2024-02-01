#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestActorOnEventDispatcher2Delegate.h"
#include "TestActorOnEventDispatcherDelegate.h"
#include "TestActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTestActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTestActorOnEventDispatcher OnTestEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTestActorOnEventDispatcher2 OnTestEventDispatcher2;
    
    UTestActorComponent();
};

