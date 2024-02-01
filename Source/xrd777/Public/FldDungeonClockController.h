#pragma once
#include "CoreMinimal.h"
#include "FldDungeonComponentBase.h"
#include "FldDungeonClockController.generated.h"

class AFldDungeonLayoutActor;
class AFldDungeonObjectActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonClockController : public UFldDungeonComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonObjectActor* m_ClockActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonLayoutActor* m_pLayoutClock;
    
public:
    UFldDungeonClockController();
};

