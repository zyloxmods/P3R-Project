#pragma once
#include "CoreMinimal.h"
#include "EFldPlayerDailyBehavior.h"
#include "FldPlayerAbsComp.h"
#include "FldPlayerDailyComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldPlayerDailyComp : public UFldPlayerAbsComp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldPlayerDailyBehavior Behavior;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldPlayerDailyBehavior NextBehavior;
    
public:
    UFldPlayerDailyComp();
};

