#pragma once
#include "CoreMinimal.h"
#include "FldDungeonComponentBase.h"
#include "FldEnemyHolder.h"
#include "FldDungeonEnemyController.generated.h"

class AFldDungeonLayoutActor;
class AFldDungeonLayoutDirectEnemyActor;
class AFldDungeonLayoutEnemyActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonEnemyController : public UFldDungeonComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonLayoutDirectEnemyActor*> m_pLayoutDirectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldEnemyHolder> m_EnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFldEnemyHolder> m_DirectEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldEnemyHolder> m_MonadEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldEnemyHolder> m_FDoorEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldEnemyHolder> m_Reaper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonLayoutEnemyActor*> m_FixedLayoutArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonLayoutActor*> m_FixedLayoutPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonLayoutEnemyActor*> m_DesignLayoutArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonLayoutActor*> m_DesignLayoutPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonLayoutDirectEnemyActor*> m_MonadLayoutArray;
    
public:
    UFldDungeonEnemyController();
    UFUNCTION(BlueprintCallable)
    void FixedFloorLoad();
    
    UFUNCTION(BlueprintCallable)
    void FixedFloorCreateActor();
    
    UFUNCTION(BlueprintCallable)
    void FixedFloorAdvanceProcess();
    
    UFUNCTION(BlueprintCallable)
    void DesignFloorLoad();
    
    UFUNCTION(BlueprintCallable)
    void DesignFloorCreateActor();
    
    UFUNCTION(BlueprintCallable)
    void DesignFloorAdvanceProcess();
    
    UFUNCTION(BlueprintCallable)
    void AutoFloorLoad();
    
    UFUNCTION(BlueprintCallable)
    void AutoFloorCreateActor();
    
    UFUNCTION(BlueprintCallable)
    void AutoFloorAdvanceProcess();
    
};

