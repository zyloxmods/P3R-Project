#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TestPauseSoundClass.generated.h"

UCLASS(Blueprintable)
class XRD777_API UTestPauseSoundClass : public UObject {
    GENERATED_BODY()
public:
    UTestPauseSoundClass();
    UFUNCTION(BlueprintCallable)
    static void testPauseSoundPasue(bool flag);
    
};

