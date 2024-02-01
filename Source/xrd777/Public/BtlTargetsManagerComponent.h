#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "BtlTargetsManagerComponent.generated.h"

class ABtlActor;
class UBtlCoreComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlTargetsManagerComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> EffectTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> CursorTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* MainCharacter;
    
public:
    UBtlTargetsManagerComponent();
    UFUNCTION(BlueprintCallable)
    void SetTargets(TArray<ABtlActor*> List);
    
    UFUNCTION(BlueprintCallable)
    void SetMainCharacter(ABtlActor* Character);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorTargets(TArray<ABtlActor*> List);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> GetTargets();
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* GetMainCharacter();
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> GetEffectTargets();
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> GetCursorTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABtlActor*> GetConstTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearForBP();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTargetIsNextActionCharacter(UBtlCoreComponent* pCore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTargetIsLatestActionCharacter(UBtlCoreComponent* pCore) const;
    
};

