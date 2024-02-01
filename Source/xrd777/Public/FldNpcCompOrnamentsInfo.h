#pragma once
#include "CoreMinimal.h"
#include "FldNpcCompPropsInfo.h"
#include "FldNpcCompOrnamentsInfo.generated.h"

USTRUCT(BlueprintType)
struct FFldNpcCompOrnamentsInfo : public FFldNpcCompPropsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mOnFlagValue;
    
    XRD777_API FFldNpcCompOrnamentsInfo();
};

