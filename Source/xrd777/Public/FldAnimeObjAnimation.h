#pragma once
#include "CoreMinimal.h"
#include "FldAnimeObjAnimation.generated.h"

class UAnimationAsset;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FFldAnimeObjAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* mAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* mNiagara;
    
    XRD777_API FFldAnimeObjAnimation();
};

