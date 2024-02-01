#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AtlEvtAnswerActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AAtlEvtAnswerActor : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppActor* mNetAnswer_;
    
public:
    AAtlEvtAnswerActor();
};

