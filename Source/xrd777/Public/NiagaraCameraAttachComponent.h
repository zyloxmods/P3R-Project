#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "NiagaraCameraAttachComponent.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UNiagaraCameraAttachComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsyncSystemLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SpawnNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoAttachCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutPlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ParticleComponent;
    
public:
    UNiagaraCameraAttachComponent();
    UFUNCTION(BlueprintCallable)
    void SetAttachCam(USceneComponent* Parent);
    
    UFUNCTION(BlueprintCallable)
    void PlayEffect();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadSystem();
    
    UFUNCTION(BlueprintCallable)
    void OnComplete(UNiagaraComponent* PSystem);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsCallDestroy();
    
    UFUNCTION(BlueprintCallable)
    bool IsAssetLoaded();
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* GetParticleComponent();
    
};

