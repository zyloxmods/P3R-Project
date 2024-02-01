#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "CmpMainLoadActor.generated.h"

class ACmpMainActor;
class UCampLoadSequenceBase;

UCLASS(Blueprintable)
class XRD777_API ACmpMainLoadActor : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCampLoadSequenceBase* pSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pParent;
    
public:
    ACmpMainLoadActor();
};

