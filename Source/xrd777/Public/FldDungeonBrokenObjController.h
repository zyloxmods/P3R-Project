#pragma once
#include "CoreMinimal.h"
#include "EDungeonObjHitEvent.h"
#include "FldDungeonComponentBase.h"
#include "FldDungeonBrokenObjController.generated.h"

class AFldDungeonLayoutBrokenActor;
class AFldDungeonObjectActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonBrokenObjController : public UFldDungeonComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonObjectActor*> m_BrokenActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonLayoutBrokenActor*> m_LayoutArray;
    
public:
    UFldDungeonBrokenObjController();
    UFUNCTION(BlueprintCallable)
    void HitEvent(EDungeonObjHitEvent EventType, int32 ID, AFldDungeonObjectActor* pObject);
    
};

