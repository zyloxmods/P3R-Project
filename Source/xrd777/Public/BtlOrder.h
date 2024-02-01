#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BtlOrder.generated.h"

class ABtlActor;

UCLASS(Blueprintable)
class XRD777_API UBtlOrder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> InterruptList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> StandbyList;
    
public:
    UBtlOrder();
};

