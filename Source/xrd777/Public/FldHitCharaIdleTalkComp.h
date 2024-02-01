#pragma once
#include "CoreMinimal.h"
#include "FldHitCharaIdleTalkCharacterParam.h"
#include "FldHitCitLookParam.h"
#include "FldHitCitTimeParam.h"
#include "FldLocalActorComp.h"
#include "FldHitCharaIdleTalkComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldHitCharaIdleTalkComp : public UFldLocalActorComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldHitCitTimeParam mMotionParam_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldHitCitLookParam mLookParam_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookAtFlag_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mFlag_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldHitCharaIdleTalkCharacterParam> mParamArray_;
    
public:
    UFldHitCharaIdleTalkComp();
};

