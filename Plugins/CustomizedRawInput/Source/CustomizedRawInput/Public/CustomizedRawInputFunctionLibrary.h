#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RegisteredDeviceInfo.h"
#include "CustomizedRawInputFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class CUSTOMIZEDRAWINPUT_API UCustomizedRawInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCustomizedRawInputFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
    
};

