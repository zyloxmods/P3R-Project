#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "CustomizedRawInputDeviceAxisProperties.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMIZEDRAWINPUT_API FCustomizedRawInputDeviceAxisProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInverted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGamepadStick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDpad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bScaling: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scales[2];
    
    FCustomizedRawInputDeviceAxisProperties();
};

