#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFldCharAttackAnimNotifyFlag.h"
#include "FldCharAttackAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class XRD777_API UFldCharAttackAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldCharAttackAnimNotifyFlag flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UFldCharAttackAnimNotify();
};

