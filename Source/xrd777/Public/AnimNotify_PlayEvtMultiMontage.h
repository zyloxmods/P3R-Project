#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AtlSlotMultiAnimationParam.h"
#include "EEvtCharaAnimationType.h"
#include "AnimNotify_PlayEvtMultiMontage.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class XRD777_API UAnimNotify_PlayEvtMultiMontage : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlSlotMultiAnimationParam> MontageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotNodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtCharaAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStop;
    
    UAnimNotify_PlayEvtMultiMontage();
    UFUNCTION(BlueprintCallable)
    void OnFinished(UAnimMontage* Montage, bool bInterapt) const;
    
};

