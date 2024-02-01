#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldEnemyHolder.h"
#include "FldEnemyManager.generated.h"

class AActor;
class UNiagaraComponent;

UCLASS(Blueprintable)
class XRD777_API AFldEnemyManager : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldEnemyHolder> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DisableleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* VanishNiagaraComp;
    
public:
    AFldEnemyManager();
    UFUNCTION(BlueprintCallable)
    void Setup(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(const bool Enable, const int32 Group);
    
    UFUNCTION(BlueprintCallable)
    void ForceEncount();
    
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
    UFUNCTION(BlueprintCallable)
    void Add(AActor* Actor);
    
};

