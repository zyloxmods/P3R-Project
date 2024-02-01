#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AppCharAttachedPropsAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class XRD777_API UAppCharAttachedPropsAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mAnimePackIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mPlayType_;
    
    UAppCharAttachedPropsAnimNotify();
};

