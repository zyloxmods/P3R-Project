#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FldOperationBase.generated.h"

class AFldOperator;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldOperationBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldOperator* Holder;
    
public:
    UFldOperationBase();
};

