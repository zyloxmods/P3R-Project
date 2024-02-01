#pragma once
#include "CoreMinimal.h"
#include "FldDungeonComponentBase.h"
#include "FldDungeonReaperController.generated.h"

class AFldDungeonEffectCameraAttachActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonReaperController : public UFldDungeonComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonEffectCameraAttachActor* m_pEffect;
    
public:
    UFldDungeonReaperController();
};

