#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TitleStateBase.generated.h"

class ATitleActor;

UCLASS(Blueprintable)
class XRD777_API UTitleStateBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATitleActor* TitleActor;
    
public:
    UTitleStateBase();
};

