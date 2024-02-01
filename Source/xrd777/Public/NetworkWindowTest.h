#pragma once
#include "CoreMinimal.h"
#include "DebugViewer.h"
#include "NetworkWindowTest.generated.h"

class AUISystemMsgActor;

UCLASS(Blueprintable)
class XRD777_API ANetworkWindowTest : public ADebugViewer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUISystemMsgActor* pDialog;
    
public:
    ANetworkWindowTest();
};

