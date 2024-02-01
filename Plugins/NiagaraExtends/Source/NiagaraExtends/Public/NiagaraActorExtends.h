#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnNiagaraCompleteDelegate.h"
#include "NiagaraActorExtends.generated.h"

class ANiagaraActorExtends;
class APlayerController;
class UNiagaraComponent;
class UNiagaraParameterCollection;
class UNiagaraParameterCollectionInstance;
class UNiagaraSystem;

UCLASS(Blueprintable)
class NIAGARAEXTENDS_API ANiagaraActorExtends : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNiagaraComplete NiagaraCompleteDispather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraParameterCollection* ParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPause;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bISBillboard;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
public:
    ANiagaraActorExtends();
    UFUNCTION(BlueprintCallable)
    void SpawnNiagaraSystem(UNiagaraSystem* InAsset, float InSpeed);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetVisibleDebugArrow_DebugOnly(bool InVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDesiredAge(float InDeltTime);
    
    UFUNCTION(BlueprintCallable)
    void RestertEffect();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnComplete(UNiagaraComponent* PSystem);
    
public:
    UFUNCTION(BlueprintCallable)
    UNiagaraParameterCollectionInstance* GetParameterCollectionInstance();
    
    UFUNCTION(BlueprintCallable)
    static ANiagaraActorExtends* CreateNiagaraActorExtends(APlayerController* InPC, UNiagaraSystem* InAsset, float InSpeed);
    
};

