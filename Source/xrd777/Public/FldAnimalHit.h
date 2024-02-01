#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FldLocalActor.h"
#include "FldAnimalHit.generated.h"

class AActor;
class UFldAnimalCompCore;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class XRD777_API AFldAnimalHit : public AFldLocalActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldAnimalCompCore* mOwner_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHitRadius_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* mHitComp_;
    
public:
    AFldAnimalHit();
    UFUNCTION(BlueprintCallable)
    void OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

