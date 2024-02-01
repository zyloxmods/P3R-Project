#pragma once
#include "CoreMinimal.h"
#include "EFldHitActorIconType.h"
#include "FldHitActorChgIconParam.generated.h"

USTRUCT(BlueprintType)
struct FFldHitActorChgIconParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldHitActorIconType mIconType;
    
    XRD777_API FFldHitActorChgIconParam();
};

