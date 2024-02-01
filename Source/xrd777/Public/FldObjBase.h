#pragma once
#include "CoreMinimal.h"
#include "ECldWeek.h"
#include "FldLocalActor.h"
#include "FldObjBase.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldObjBase : public AFldLocalActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mOnFlagName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mOffFlagName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECldWeek mOnWeek_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnWeek_;
    
    AFldObjBase();
};

