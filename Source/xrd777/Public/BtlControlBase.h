#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlEncountParam.h"
#include "BtlControlBase.generated.h"

class UBtlCoreComponent;

UCLASS(Blueprintable)
class XRD777_API ABtlControlBase : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlCoreComponent* BtlCore;
    
    ABtlControlBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SyncBattleFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGamePaused(int32 IsPause);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PreLoad(const FBtlEncountParam& EncountParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Encount(const FBtlEncountParam& EncountParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyLoadedData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckBattleInProgress();
    
};

