#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EBattlePhaseName.h"
#include "EBtlPhaseType.h"
#include "BtlPhase.generated.h"

class ABtlPhase;

UCLASS(Blueprintable)
class XRD777_API ABtlPhase : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlPhaseType Type;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ImplementInBP;
    
public:
    ABtlPhase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SyncProgressTimingInBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPhaseInBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartPhase();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetNowBattlePhaseName(EBattlePhaseName newPhaseName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ABtlPhase* GetNextPhaseInBP();
    
public:
    UFUNCTION(BlueprintCallable)
    ABtlPhase* GetNextPhase();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinalizePhaseInBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void FinalizePhase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ABtlPhase* CreateNextPhase(EBtlPhaseType phase);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckProgressNextPhaseInBP() const;
    
};

