#pragma once
#include "CoreMinimal.h"
#include "FldLocalActor.h"
#include "FldFieldEventActor.generated.h"

class UAppCharacterComp;

UCLASS(Blueprintable)
class XRD777_API AFldFieldEventActor : public AFldLocalActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppCharacterComp* mChgHeroComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UAppCharacterComp*> mChgPartnerComps_;
    
public:
    AFldFieldEventActor();
};

