#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BtlManagerInterface.generated.h"

UINTERFACE(Blueprintable)
class XRD777_API UBtlManagerInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IBtlManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MarkAsBtlCoreIsReady();
    
};

