#pragma once
#include "CoreMinimal.h"
#include "FldLocalActor.h"
#include "FldMiscCameraShake.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable)
class XRD777_API AFldMiscCameraShake : public AFldLocalActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* mCollection_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSetTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSetFrequency_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSetPowerX_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSetPowerY_;
    
public:
    AFldMiscCameraShake();
};

