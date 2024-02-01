#pragma once
#include "CoreMinimal.h"
#include "FldCameraHitBase.h"
#include "FldCameraHitBox.generated.h"

class AFldCameraFixed;
class UBoxComponent;

UCLASS(Blueprintable)
class XRD777_API AFldCameraHitBox : public AFldCameraHitBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldCameraFixed* Camera;
    
public:
    AFldCameraHitBox();
};

