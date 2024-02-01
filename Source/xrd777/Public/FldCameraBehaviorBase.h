#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFldCameraForwardType.h"
#include "FldCameraBehaviorBase.generated.h"

class AActor;
class AFldCameraBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldCameraBehaviorBase : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldCameraBase* BaseOwner;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldCameraForwardType ForwardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FreeForward;
    
public:
    UFldCameraBehaviorBase();
};

