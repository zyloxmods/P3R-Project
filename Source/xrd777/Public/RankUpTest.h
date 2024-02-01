#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "RankUpTest.generated.h"

class UDebugMenu;

UCLASS(Blueprintable)
class XRD777_API ARankUpTest : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* DebugMenu;
    
    ARankUpTest();
};

