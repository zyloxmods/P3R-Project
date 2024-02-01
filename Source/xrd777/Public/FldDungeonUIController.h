#pragma once
#include "CoreMinimal.h"
#include "FldDungeonComponentBase.h"
#include "FldDungeonUIController.generated.h"

class AFldDungeonUIActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonUIController : public UFldDungeonComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonUIActor*> m_UIActor;
    
public:
    UFldDungeonUIController();
};

