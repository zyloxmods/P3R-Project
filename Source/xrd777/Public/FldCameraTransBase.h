#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "FldCameraTransBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldCameraTransBase : public UAppActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdentifyAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComplementaryAngle;
    
    UFldCameraTransBase();
};

