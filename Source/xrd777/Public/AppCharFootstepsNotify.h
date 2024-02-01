#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EAppCharFootstepsType.h"
#include "AppCharFootstepsNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class XRD777_API UAppCharFootstepsNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppCharFootstepsType Type;
    
    UAppCharFootstepsNotify();
};

