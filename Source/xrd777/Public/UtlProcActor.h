#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "AppActor.h"
#include "UtlProcActorDelegateDelegate.h"
#include "UtlProcActor.generated.h"

class UObject;

UCLASS(Blueprintable)
class XRD777_API AUtlProcActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUtlProcActorDelegate mEndDelegate_;
    
    AUtlProcActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartProc();
    
    UFUNCTION(BlueprintCallable)
    void ReturnField();
    
    UFUNCTION(BlueprintCallable)
    void Return();
    
protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void RequestBfSettedFile(const UObject* WorldContextObject, int32 ProcNo, FLatentActionInfo LatentInfo, int32& Result);
    
};

