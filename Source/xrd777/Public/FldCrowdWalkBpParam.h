#pragma once
#include "CoreMinimal.h"
#include "FldCrowdWalkFollowParam.h"
#include "Templates/SubclassOf.h"
#include "FldCrowdWalkBpParam.generated.h"

class AMobWalkCharaBaseCore;

USTRUCT(BlueprintType)
struct FFldCrowdWalkBpParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMobWalkCharaBaseCore> mMobBpClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldCrowdWalkFollowParam> mFollowList;
    
    XRD777_API FFldCrowdWalkBpParam();
};

