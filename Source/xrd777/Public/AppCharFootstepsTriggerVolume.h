#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "UAppCharFootstepsLabel.h"
#include "AppCharFootstepsTriggerVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class XRD777_API AAppCharFootstepsTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUAppCharFootstepsLabel mLabel_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mTimeNoon_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mTimeAfternoon_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mTimeNight_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mTimeShadow_;
    
    AAppCharFootstepsTriggerVolume();
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

