#pragma once
#include "CoreMinimal.h"
#include "FldCrowdNpcChildParam.generated.h"

USTRUCT(BlueprintType)
struct FFldCrowdNpcChildParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mColorID_G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mColorID_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mRandomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mGrassesOn;
    
    XRD777_API FFldCrowdNpcChildParam();
};

