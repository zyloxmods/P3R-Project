#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FldHitPartnerProcs.generated.h"

class AUtlProcActor;

USTRUCT(BlueprintType)
struct FFldHitPartnerProcs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUtlProcActor> Talk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUtlProcActor> Assemble;
    
    XRD777_API FFldHitPartnerProcs();
};

