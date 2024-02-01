#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FldLocalActor.h"
#include "FldLinkAnimHitBase.generated.h"

class AActor;
class AFldLinkAnimObj;
class UPrimitiveComponent;
class USceneComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class XRD777_API AFldLinkAnimHitBase : public AFldLocalActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* HitComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldLinkAnimObj*> mLinkObjectArray_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mOneshotFlag_;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mFlag_;
    
public:
    AFldLinkAnimHitBase();
    UFUNCTION(BlueprintCallable)
    void OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

