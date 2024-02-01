#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FclWeaponShopDrawActorBase.generated.h"

class AActor;
class ACameraActor;
class UMcaAsset;

UCLASS(Blueprintable)
class XRD777_API AFclWeaponShopDrawActorBase : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMcaAsset* _CurrentMcaAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* _CurrentCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* _OldCamera;
    
public:
    AFclWeaponShopDrawActorBase();
    UFUNCTION(BlueprintCallable)
    void SetMcaCamera(UMcaAsset* McaAsset, bool Play);
    
};

