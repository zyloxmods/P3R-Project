#pragma once
#include "CoreMinimal.h"
#include "CustomizedRawInputDeviceAxisProperties.h"
#include "CustomizedRawInputDeviceButtonProperties.h"
#include "CustomizedRawInputDeviceConfiguration.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMIZEDRAWINPUT_API FCustomizedRawInputDeviceConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VendorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnalogFreeMergin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizedRawInputDeviceAxisProperties> AxisProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizedRawInputDeviceButtonProperties> ButtonProperties;
    
    FCustomizedRawInputDeviceConfiguration();
};

