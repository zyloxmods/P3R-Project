#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BattleEncountDelegateDelegate.h"
#include "EBtlEncountWipeType.h"
#include "BtlEncountWipeCore.generated.h"

class ABtlEncountWipeCore;
class UBtlCoreComponent;

UCLASS(Blueprintable)
class XRD777_API ABtlEncountWipeCore : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleEncountDelegate OnCalledBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool requestWipeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isWraped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSequenceEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlEncountWipeType wipeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlCoreComponent* Core;
    
    ABtlEncountWipeCore();
    UFUNCTION(BlueprintCallable)
    void RequestEndWipe(UBtlCoreComponent* NewCore);
    
    UFUNCTION(BlueprintCallable)
    static void LoadResources();
    
    UFUNCTION(BlueprintCallable)
    EBtlEncountWipeType GetWipeType();
    
    UFUNCTION(BlueprintCallable)
    void ForceFadeIn();
    
    UFUNCTION(BlueprintCallable)
    static void ClearResources();
    
    UFUNCTION(BlueprintCallable)
    bool CheckFadeInEnd();
    
    UFUNCTION(BlueprintCallable)
    static ABtlEncountWipeCore* BtlEncountWipeGetInstance();
    
    UFUNCTION(BlueprintCallable)
    static void BtlEncountWipeDeleteInstance();
    
    UFUNCTION(BlueprintCallable)
    static bool BtlEncountWipeCheckWraped();
    
};

