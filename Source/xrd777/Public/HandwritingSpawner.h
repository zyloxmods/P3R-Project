#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AppActor.h"
#include "AtlHandwritingNiagaraRequestParam.h"
#include "EAtlEvtHandwritingType.h"
#include "EAtlHandwritingGroupType.h"
#include "EHandwritingSpawnRules.h"
#include "Templates/SubclassOf.h"
#include "HandwritingSpawner.generated.h"

class ACharacter;
class AHandwritingEffectBase;
class ANpcBaseCore;
class UAtlHandwritingDataAsset;
class UNiagaraComponent;

UCLASS(Blueprintable)
class XRD777_API AHandwritingSpawner : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHandwritingEffectBase> HandwritingEffectObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlHandwritingGroupType HandwritingGroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDestroyWhenFinishedHandwriting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlHandwritingDataAsset* DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAtlHandwritingNiagaraRequestParam NiagaraRequestedParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHandwritingSpawnRules SpawnRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAtlEvtHandwritingType HandwritingType;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHandwritingEffectBase> HandwritingEffectBaseActor;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNiagaraComponent> HandwritingComp;
    
public:
    AHandwritingSpawner();
    UFUNCTION(BlueprintCallable)
    void RequestPlayEffectFromParam(EAtlEvtHandwritingType InType, const FAtlHandwritingNiagaraRequestParam& InParam, EHandwritingSpawnRules InSpawnRule, bool bInLoop);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayEffectAtSpawnerLocation(EAtlEvtHandwritingType InType, bool bInLoop, const FVector& InLocation, const FRotator& InRotator, int32 InLoopCount, int32 InCameraOffset, const FVector& InScale);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayEffectAtSpawnerAttachedToNpc(EAtlEvtHandwritingType InType, ANpcBaseCore* NpcBase, FName AttachSocketName, EHandwritingSpawnRules InSpawnRule, bool bInLoop, const FVector& InLocation, const FRotator& InRotator, int32 InLoopCount, int32 InCameraOffset, const FVector& InScale);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayEffectAtSpawnerAttachedTo(EAtlEvtHandwritingType InType, ACharacter* Character, FName AttachSocketName, EHandwritingSpawnRules InSpawnRule, bool bInLoop, const FVector& InLocation, const FRotator& InRotator, int32 InLoopCount, int32 InCameraOffset, const FVector& InScale);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayEffect(EAtlEvtHandwritingType InType, EHandwritingSpawnRules InSpawnRule, bool bInLoop);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCompleteNiagara(UNiagaraComponent* PSystem);
    
    UFUNCTION(BlueprintCallable)
    void LoadEffectEnded();
    
};

