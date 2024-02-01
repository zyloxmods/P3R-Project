#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FldNpcCompPropsParam.generated.h"

USTRUCT(BlueprintType)
struct FFldNpcCompPropsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mMajorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mMinorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mAddTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mMotionAttached;
    
    XRD777_API FFldNpcCompPropsParam();
};

