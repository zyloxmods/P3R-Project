#pragma once
#include "CoreMinimal.h"
#include "BtlSkillCameraEffectParam.generated.h"

class UNiagaraCameraAttachComponent;

USTRUCT(BlueprintType)
struct FBtlSkillCameraEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraCameraAttachComponent* CameraEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    XRD777_API FBtlSkillCameraEffectParam();
};

