#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HttpBpLib.generated.h"

UCLASS(Blueprintable)
class XRD777_API UHttpBpLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHttpBpLib();
    UFUNCTION(BlueprintCallable)
    static void SpawnHttpActor(const FString& BPActorReferencePath, const FString& Arg);
    
    UFUNCTION(BlueprintCallable)
    static void PostTeamsMessage(const FString& URL, const FString& Title, const FString& Text);
    
};

