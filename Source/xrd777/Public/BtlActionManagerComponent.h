#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "EBtlCommandType.h"
#include "BtlActionManagerComponent.generated.h"

class ABtlActor;
class UBtlTargetsManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlActionManagerComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* ActionCommander;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlCommandType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> ActionTargets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlTargetsManagerComponent* TargetsManager;
    
    UBtlActionManagerComponent();
    UFUNCTION(BlueprintCallable)
    void SetCommandWithTargets(ABtlActor* commander, EBtlCommandType Type, int32 ID, TArray<ABtlActor*> Targets);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandTargets(TArray<ABtlActor*> Targets);
    
    UFUNCTION(BlueprintCallable)
    void SetCommander(ABtlActor* commander);
    
    UFUNCTION(BlueprintCallable)
    void SetCommand(ABtlActor* commander, EBtlCommandType Type, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void DoCommand();
    
    UFUNCTION(BlueprintCallable)
    void ClearCommand();
    
};

