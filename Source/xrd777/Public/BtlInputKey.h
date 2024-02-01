#pragma once
#include "CoreMinimal.h"
#include "BtlInputKeyParam.h"
#include "BtlInputKey.generated.h"

USTRUCT(BlueprintType)
struct FBtlInputKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlInputKeyParam Trig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlInputKeyParam Press;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlInputKeyParam Rep;
    
    XRD777_API FBtlInputKey();
};

