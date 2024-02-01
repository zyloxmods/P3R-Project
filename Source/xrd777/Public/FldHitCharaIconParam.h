#pragma once
#include "CoreMinimal.h"
#include "EFldHitCharaIconType.h"
#include "FldHitCharaIconParam.generated.h"

USTRUCT(BlueprintType)
struct FFldHitCharaIconParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldHitCharaIconType mIconType;
    
    XRD777_API FFldHitCharaIconParam();
};

