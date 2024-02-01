#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FldNpcCompAttachPropsParam.generated.h"

USTRUCT(BlueprintType)
struct FFldNpcCompAttachPropsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mAddTransform;
    
    XRD777_API FFldNpcCompAttachPropsParam();
};

