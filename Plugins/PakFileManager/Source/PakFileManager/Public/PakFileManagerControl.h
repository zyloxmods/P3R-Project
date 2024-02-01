#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PakFileManagerControl.generated.h"

class UPakFile;

UCLASS(Blueprintable)
class PAKFILEMANAGER_API UPakFileManagerControl : public UObject {
    GENERATED_BODY()
public:
    UPakFileManagerControl();
    UFUNCTION(BlueprintCallable)
    UPakFile* requestReadFile(const FString& Filename);
    
};

