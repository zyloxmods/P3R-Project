#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtlEvtPlayParameter.h"
#include "BFLAtlEvtTest.generated.h"

class UObject;

UCLASS(Blueprintable)
class XRD777_API UBFLAtlEvtTest : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBFLAtlEvtTest();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EvtPlayOnBindingActor(const UObject* WorldContextObject, const FString& EvtName, const FString& SublevelOnBindingActorName, const FAtlEvtPlayParameter& Param);
    
};

