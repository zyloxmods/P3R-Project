#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldTargetIcon.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldTargetIcon : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mOnFlagName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mOffFlagName_;
    
    AFldTargetIcon();
};

