#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AppCharAnimLockLookAtNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class XRD777_API UAppCharAnimLockLookAtNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInterpSpeed_;
    
    UAppCharAnimLockLookAtNotify();
};

