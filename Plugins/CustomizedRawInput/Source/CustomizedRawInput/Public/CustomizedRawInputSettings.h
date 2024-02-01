#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CustomizedRawInputDeviceConfiguration.h"
#include "CustomizedRawInputSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Input)
class CUSTOMIZEDRAWINPUT_API UCustomizedRawInputSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizedRawInputDeviceConfiguration> DeviceConfigurations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisconnectWaitSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerId;
    
    UCustomizedRawInputSettings();
};

