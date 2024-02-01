#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "FldCrowdWalkFollowParam.generated.h"

class AMobWalkCharaBaseCore;

USTRUCT(BlueprintType)
struct FFldCrowdWalkFollowParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMobWalkCharaBaseCore> mMobBpClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mRelativeLocation;
    
    XRD777_API FFldCrowdWalkFollowParam();
};

