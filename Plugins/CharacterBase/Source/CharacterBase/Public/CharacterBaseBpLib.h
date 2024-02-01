#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CharacterBaseBpLib.generated.h"

class UAnimBlueprint;
class UObject;

UCLASS(Blueprintable)
class CHARACTERBASE_API UCharacterBaseBpLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharacterBaseBpLib();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    FString GetSoftClassPath(const UObject* WorldContextObject, TSoftObjectPtr<UAnimBlueprint> AnimBP);
    
};

