#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldCrowdNpcChildParam.h"
#include "FldCrowdNpcBase.generated.h"

class AActor;
class UCapsuleComponent;

UCLASS(Blueprintable)
class XRD777_API AFldCrowdNpcBase : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mDispValue_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mOffFlagName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldCrowdNpcChildParam> mChildParam_;
    
    AFldCrowdNpcBase();
    UFUNCTION(BlueprintCallable)
    static float UpdateOpacityByPlayerActor(float Opacity, AActor* TargetActor);
    
};

