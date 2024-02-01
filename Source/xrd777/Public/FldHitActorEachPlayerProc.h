#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FldHitActorEachPlayerProc.generated.h"

class AUtlProcActor;

USTRUCT(BlueprintType)
struct FFldHitActorEachPlayerProc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mPlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUtlProcActor> mProcActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mKeyLock;
    
    XRD777_API FFldHitActorEachPlayerProc();
};

