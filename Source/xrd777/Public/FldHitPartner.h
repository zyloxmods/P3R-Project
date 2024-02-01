#pragma once
#include "CoreMinimal.h"
#include "FldHitCore.h"
#include "FldHitPartnerProcs.h"
#include "FldHitPartner.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldHitPartner : public AFldHitCore {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFldHitPartnerProcs> Procs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTalkFirst;
    
public:
    AFldHitPartner();
};

