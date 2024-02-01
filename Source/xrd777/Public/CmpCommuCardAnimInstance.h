#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CmpCommuCardAnimInstanceEventDispatherDelegate.h"
#include "CmpCommuCardAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class XRD777_API UCmpCommuCardAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCmpCommuCardAnimInstanceEventDispather RootYawEvent;
    
    UCmpCommuCardAnimInstance();
};

