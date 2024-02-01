#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "PadRumbleSequencer.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable)
class XRD777_API APadRumbleSequencer : public AAppActor {
    GENERATED_BODY()
public:
    APadRumbleSequencer();
    UFUNCTION(BlueprintCallable)
    void RumbleStopSmall();
    
    UFUNCTION(BlueprintCallable)
    void RumbleStopLarge();
    
    UFUNCTION(BlueprintCallable)
    void RumbleStopAsset();
    
    UFUNCTION(BlueprintCallable)
    void RumbleStartSmall(int32 Frame, int32 WaitFrame, int32 Num, int32 TotalFram);
    
    UFUNCTION(BlueprintCallable)
    void RumbleStartLarge(int32 power, int32 Frame, int32 WaitFrame, int32 Num, int32 TotalFram);
    
    UFUNCTION(BlueprintCallable)
    void RumbleStartAsset(UForceFeedbackEffect* pRumble, bool IsLoop);
    
};

