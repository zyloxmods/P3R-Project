#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppActor.h"
#include "EDungeonEffectType.h"
#include "FldDungeonEffectActor.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonEffectActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonEffectType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath NiagaraPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fadeOutTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* m_pNiagara;
    
public:
    AFldDungeonEffectActor();
    UFUNCTION(BlueprintCallable)
    void SetPlayEnd();
    
    UFUNCTION(BlueprintCallable)
    void RequestFadeOut();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlay();
    
    UFUNCTION(BlueprintCallable)
    float GetPlayTime();
    
    UFUNCTION(BlueprintCallable)
    float GetFadeValue();
    
    UFUNCTION(BlueprintCallable)
    float GetFadeOutTime();
    
    UFUNCTION(BlueprintCallable)
    float GetFadeInTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPInit();
    
};

