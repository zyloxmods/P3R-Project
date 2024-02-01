#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "CommunityCallEventData.h"
#include "CommunityEventManager.generated.h"

UCLASS(Blueprintable)
class XRD777_API ACommunityEventManager : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityCallEventData> CallEventList;
    
public:
    ACommunityEventManager();
};

