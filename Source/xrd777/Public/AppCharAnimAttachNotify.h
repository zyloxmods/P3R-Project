#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AppCharAnimAttachNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class XRD777_API UAppCharAnimAttachNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mSocketName_;
    
    UAppCharAnimAttachNotify();
};

