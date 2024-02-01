#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PakFile.generated.h"

UCLASS(Blueprintable)
class PAKFILEMANAGER_API UPakFile : public UObject {
    GENERATED_BODY()
public:
    UPakFile();
    UFUNCTION(BlueprintCallable)
    bool syncReadFile();
    
};

