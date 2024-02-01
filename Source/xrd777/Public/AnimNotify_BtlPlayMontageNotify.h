#pragma once
#include "CoreMinimal.h"
#include "AnimNotifies/AnimNotify_PlayMontageNotify.h"
#include "AnimNotify_BtlPlayMontageNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class XRD777_API UAnimNotify_BtlPlayMontageNotify : public UAnimNotify_PlayMontageNotify {
    GENERATED_BODY()
public:
    UAnimNotify_BtlPlayMontageNotify();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ReplaceNotifyName(FName NewName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetBattleNotifyName() const;
    
};

