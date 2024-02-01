#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CmpMenuBase.generated.h"

class ACmpMainActor;

UCLASS(Blueprintable)
class XRD777_API UCmpMenuBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
public:
    UCmpMenuBase();
};

