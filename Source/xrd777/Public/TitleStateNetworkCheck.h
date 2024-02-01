#pragma once
#include "CoreMinimal.h"
#include "TitleStateBase.h"
#include "TitleStateNetworkCheck.generated.h"

class AUISystemMsgActor;

UCLASS(Blueprintable)
class XRD777_API UTitleStateNetworkCheck : public UTitleStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUISystemMsgActor* NetWaitDialog;
    
public:
    UTitleStateNetworkCheck();
};

