#pragma once
#include "CoreMinimal.h"
#include "FldHitCitTimeParam.h"
#include "FldHitCitLookParam.generated.h"

class AFldLocalActor;

USTRUCT(BlueprintType)
struct FFldHitCitLookParam : public FFldHitCitTimeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldLocalActor* mTargetActer;
    
    XRD777_API FFldHitCitLookParam();
};

