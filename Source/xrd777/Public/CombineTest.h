#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "CombineTest.generated.h"

class UUICombineCalc;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API ACombineTest : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICombineCalc* CombineCalc_;
    
    ACombineTest();
};

