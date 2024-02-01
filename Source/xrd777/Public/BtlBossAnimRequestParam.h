#pragma once
#include "CoreMinimal.h"
#include "EBtlAnimationType.h"
#include "BtlBossAnimRequestParam.generated.h"

USTRUCT(BlueprintType)
struct FBtlBossAnimRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlAnimationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCustomFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomFadeOut;
    
    XRD777_API FBtlBossAnimRequestParam();
};

