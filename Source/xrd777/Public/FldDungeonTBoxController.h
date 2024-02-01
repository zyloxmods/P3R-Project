#pragma once
#include "CoreMinimal.h"
#include "EDungeonObjHitEvent.h"
#include "FldDungeonComponentBase.h"
#include "FldDungeonTBoxController.generated.h"

class AFldDungeonObjectActor;
class AFldDungeonSoundBaseActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonTBoxController : public UFldDungeonComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonObjectActor*> m_TBoxActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonSoundBaseActor*> m_TBoxSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonObjectActor* m_HitTBox;
    
public:
    UFldDungeonTBoxController();
    UFUNCTION(BlueprintCallable)
    void HitEvent(EDungeonObjHitEvent EventType, int32 ID, AFldDungeonObjectActor* pObject);
    
    UFUNCTION(BlueprintCallable)
    void ForbiddenDoorHitEvent(EDungeonObjHitEvent EventType, int32 ID, AFldDungeonObjectActor* pObject);
    
    UFUNCTION(BlueprintCallable)
    void FixedFloorAdvanceProcess();
    
    UFUNCTION(BlueprintCallable)
    void DesignFloorAdvanceProcess();
    
    UFUNCTION(BlueprintCallable)
    void AutoFloorAdvanceProcess();
    
};

