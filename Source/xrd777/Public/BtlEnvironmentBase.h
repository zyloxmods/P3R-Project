#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "BtlEnvironmentBase.generated.h"

class AFldAnimObj;
class ANiagaraActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlEnvironmentBase : public UAppActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldAnimObj*> BgObjList;
    
public:
    UBtlEnvironmentBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestLoversFogEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InvisibleHangedmanBGObj();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<ANiagaraActor*> GetNyxAvatarFeatherEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AFldAnimObj*> GetMonorailWallObj();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AFldAnimObj*> GetMonorailStrapObj();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<ANiagaraActor*> GetMonorailRushEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AFldAnimObj* GetMonorailBGObj();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<ANiagaraActor*> GetLoversFogEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeleteLoversFogEffect();
    
};

