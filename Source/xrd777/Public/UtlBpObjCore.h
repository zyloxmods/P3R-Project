#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "UtlBpObjDelegateDelegate.h"
#include "UtlBpObjCore.generated.h"

UCLASS(Blueprintable)
class XRD777_API UUtlBpObjCore : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUtlBpObjDelegate mEndDelegate_;
    
    UUtlBpObjCore();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void UnloadLevel(FName LevelName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartProc();
    
    UFUNCTION(BlueprintCallable)
    void ReturnField();
    
    UFUNCTION(BlueprintCallable)
    void Return();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void LoadLevel(FName LevelName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CallOpenLevel(FName LevelName);
    
};

